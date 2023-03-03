#pragma once
#include <stddef.h>
#include <stdint.h>
#include "pci.h"


//static header_0x0_pci_device_table PCI_0x0_device[256];
//static header_0x1_pci_device_table PCI_0x1_device[256];
//static header_0x2_pci_device_table PCI_0x2_device[256];



static uint8_t lapic_ids[256]={0}; // CPU core Local APIC IDs
static uint8_t numcore=0;          // number of cores detected
static uint64_t lapic_ptr=0;       // pointer to the Local APIC MMIO registers
static uint64_t ioapic_ptr=0;      // pointer to the IO APIC MMIO registers

static pci_device_table Graphics_Adapter[256];







void Find_Device_Type(uint8_t headerType
,uint8_t classCode, uint8_t subClass,uint8_t progIF);



