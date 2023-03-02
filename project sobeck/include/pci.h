#pragma once
#include <stddef.h>
#include <stdint.h>
#include "pci.h"





uint16_t pciConfigReadWord(uint8_t bus, uint8_t slot, uint8_t func, uint8_t offset);


uint16_t pciCheckVendor(uint8_t bus, uint8_t slot, uint8_t func );



void checkFunction(uint8_t bus, uint8_t device, uint8_t function);

void checkDevice(uint8_t bus, uint8_t device);

void checkAllBuses(void);
void checkBus(uint8_t bus);
uint16_t getHeaderType(uint8_t bus,uint8_t slot, uint8_t func);
uint16_t getBaseClass(uint8_t bus, uint8_t slot,uint8_t func);
uint16_t getSecondaryBus(uint8_t bus, uint8_t slot,uint8_t func);
uint16_t getSubClass(uint8_t bus, uint8_t slot,uint8_t func);

void store_device_info(uint8_t bus, uint8_t slot,uint8_t func);

void pci_start();
