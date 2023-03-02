#pragma once
#include <stddef.h>
#include <stdint.h>


typedef struct __attribute__((packed)){
    uint64_t vendorID;
    uint64_t deviceID;
    uint64_t command;
    uint64_t status;
    uint64_t revisionID;
    uint64_t progIF;
    uint64_t subClass;
    uint64_t classCode;
    uint64_t cacheLine;
    uint64_t latencyTimer;
    uint64_t headerType;
    uint64_t BIST;
}pci_device_table;

static pci_device_table PCIdevice[256];



static uint8_t lapic_ids[256]={0}; // CPU core Local APIC IDs
static uint8_t numcore=0;          // number of cores detected
static uint64_t lapic_ptr=0;       // pointer to the Local APIC MMIO registers
static uint64_t ioapic_ptr=0;      // pointer to the IO APIC MMIO registers

