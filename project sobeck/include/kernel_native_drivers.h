#pragma once
#include "alpha_variables.h"
#include "string.h"
#include "AHCI.h"

void KERNEL_OHCI_USB1(uint8_t bus,uint8_t device,uint8_t function,uint16_t vendorID,uint16_t DeviceID);

void Find_OHCI_Storage_Devices(uint8_t bus,uint8_t device,uint8_t  function,uint16_t vendorID,uint16_t DeviceID);



void store_sata_drive(uint8_t bus,uint8_t device,uint8_t function,uint8_t DriverSelect);
void Write_Sata(uint8_t driveW, uint32_t valueW);
uint32_t Read_Sata(uint8_t driveR, uint32_t valueR);
void Reset_drives(uint8_t driveRS);

void init_sata_drive(SATA_DRIVE_KERNEL DriveL);
void init_ahci_drive(SATA_DRIVE_KERNEL driveL);









