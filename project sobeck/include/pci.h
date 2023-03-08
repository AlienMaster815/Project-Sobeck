#pragma once
#include <stddef.h>
#include <stdint.h>
#include "kernel_native_drivers.h"
//atribute packed so the compiler dosent waste ram
typedef struct __attribute__((packed)){
    uint16_t vendorID;
    uint16_t deviceID;
    uint16_t command;
    uint16_t status;
    uint8_t revisionID;
    uint8_t progIF;
    uint8_t subClass;
    uint8_t classCode;
    uint8_t cacheLine;
    uint8_t latencyTimer;
    uint8_t headerType;
    uint8_t BIST;
}pci_device_table;



typedef struct __attribute__((packed)){
    uint8_t hardware_num;
    uint16_t vendorID;
    uint16_t deviceID;
    uint16_t command;
    uint16_t status;
    uint8_t revisionID;
    uint8_t progIF;
    uint8_t subClass;
    uint8_t classCode;
    uint8_t cacheLine;
    uint8_t latencyTimer;
    uint8_t headerType;
    uint8_t BIST;
    uint32_t base_address_0;
    uint32_t base_address_1;
    uint32_t base_address_2;
    uint32_t base_address_3;
    uint32_t base_address_4;
    uint32_t base_address_5;
    uint16_t CardBusCISPointer;
    uint16_t SubsytemVendorID;
    uint16_t subsytemID;
    uint32_t expansionROMBaseAdress;
    uint16_t capabitlitiesPointer;
    uint8_t reserved_lobyte;
    uint16_t reserveed_midbyte;
    uint32_t reserved_highbyte;
    uint8_t interuptLine;
    uint8_t interuptPin;
    uint8_t MinGrant;
    uint8_t MaxLatency;
}header_0x0_pci_device_table ;

typedef struct __attribute__((packed)){
    uint8_t hardware_num;
    uint16_t vendorID;
    uint16_t deviceID;
    uint16_t command;
    uint16_t status;
    uint8_t revisionID;
    uint8_t progIF;
    uint8_t subClass;
    uint8_t classCode;
    uint8_t cacheLine;
    uint8_t latencyTimer;
    uint8_t headerType;
    uint8_t BIST;
    uint32_t base_address_0;
    uint32_t base_address_1;
    uint8_t Primary_Bus_Num;
    uint8_t Secondary_Bus_Num;
    uint8_t Subordinate_Bus_Num;
    uint8_t Secondary_Latency_Timer;
    uint8_t IO_BASE;
    uint8_t IO_LIMIT;
    uint16_t Secondary_Status;
    uint16_t Memory_Base;
    uint16_t Memory_Limit;
    uint16_t Prefetch_Memory_Base_lobyte;
    uint16_t Prefetch_Memory_Limit_lobyte;
    uint32_t Prefetch_Memory_base_highbyte;
    uint32_t Prefetch_Memory_Limit_highbyte;
    uint16_t IO_Base_highbyte;
    uint16_t IO_Limit_highbyte;
    uint16_t capabitlitiesPointer;
    uint8_t reserved_lobyte;
    uint16_t reserved_highbyte;
    uint32_t Exspansion_ROM_Base_Address;
    uint8_t interuptLine;
    uint8_t interuptPin;
    uint16_t Bridge_Control;
}header_0x1_pci_device_table;



typedef struct __attribute__((packed)){
    uint8_t hardware_num;
    uint16_t vendorID;
    uint16_t deviceID;
    uint16_t command;
    uint16_t status;
    uint8_t revisionID;
    uint8_t progIF;
    uint8_t subClass;
    uint8_t classCode;
    uint8_t cacheLine;
    uint8_t latencyTimer;
    uint8_t headerType;
    uint8_t BIST;
    uint32_t CardBusSocket_ExCaBaseAddress;
    uint8_t offset_of_capabilities;
    uint8_t reserved;
    uint16_t Secondary_Status;
    uint8_t PCI_BUS_NUM;
    uint8_t Card_Bus_Num;
    uint8_t Subordinate_Bus_Num;
    uint8_t Card_Bus_Latency_Timer;
    uint32_t Memory_Base_Address_0;
    uint32_t Memory_Limit_0;
    uint32_t Memory_Base_Address_1;
    uint32_t Memory_Limit_1;
    uint32_t IO_Base_Address_0;
    uint32_t IO_LIMIT_0;
    uint32_t IO_Base_Address_1;
    uint32_t IO_LIMIT_1;
    uint8_t interuptLine;
    uint8_t interuptPin;
    uint16_t bridge_control;
    uint16_t SubsytemDeviceID;
    uint16_t SubsytemVendorID;
    uint32_t Legacy_Mode_Base_Address;
}header_0x2_pci_device_table;






uint16_t pciConfigReadWord(uint8_t bus, uint8_t slot, uint8_t func, uint8_t offset);
uint8_t getProgIF(uint16_t bus, uint16_t device, uint16_t function);

void Reset_PCI_Devices_Counter();
uint16_t pciCheckVendor(uint8_t bus, uint8_t slot, uint8_t func );
uint16_t getClassId(uint16_t bus, uint16_t device, uint16_t function);
uint8_t getHeaderType(uint8_t bus,uint8_t slot,uint8_t function);
uint16_t getSubClassId(uint16_t bus, uint16_t device, uint16_t function);

uint16_t getClassId(uint16_t bus, uint16_t device, uint16_t function);


uint16_t getDeviceID(uint16_t bus, uint16_t device, uint16_t function);

void pci_write(uint16_t bus,uint16_t device,uint16_t function,uint32_t registeroffset, uint32_t value);

uint16_t pci_read(uint16_t bus,uint16_t device,uint16_t function,uint32_t registeroffset);

void store_device_info(uint8_t bus, uint8_t slot,uint8_t func);

void pci_start();
void sort(uint8_t bus, uint8_t slot,uint8_t func, uint16_t header,uint8_t devie_num);

uint8_t pci_Has_Function(uint16_t bus,uint16_t device);

void FindPciDriver();
void FindPciDevice();
uint16_t getVendorID(uint16_t bus, uint16_t device, uint16_t function);
uint8_t getHeaderType(uint8_t bus,uint8_t slot,uint8_t function);

void find_device(uint8_t bus , uint8_t device ,uint8_t function);
