#include "sys_inf.h"
#include "io.h"
#include "pci.h"
uint16_t pciConfigReadWord(uint8_t bus, uint8_t slot, uint8_t func, uint8_t offset) {
    uint32_t address;
    uint32_t lbus  = (uint32_t)bus;
    uint32_t lslot = (uint32_t)slot;
    uint32_t lfunc = (uint32_t)func;
    uint16_t tmp = 0;

    // Create configuration address as per Figure 1
    address = (uint32_t)((lbus << 16) | (lslot << 11) |
              (lfunc << 8) | (offset & 0xFC) | ((uint32_t)0x80000000));

    // Write out the address
    outl(0xCF8, address);
    // Read in the data
    // (offset & 2) * 8) = 0 will choose the first word of the 32-bit register
    tmp = (uint16_t)((inl(0xCFC) >> ((offset & 2) * 8)) & 0xFFFF);
    return tmp;
}

uint16_t getHeaderType(uint8_t bus, uint8_t slot,uint8_t func){
    uint16_t vendor,header;
    if ((vendor = pciConfigReadWord(bus, slot, func, 0)) != 0xFFFF) {
        header = pciConfigReadWord(bus, slot, func, 15);
    }
    return header;
}


uint16_t getBaseClass(uint8_t bus, uint8_t slot,uint8_t func){
    uint16_t vendor,class;
    if ((vendor = pciConfigReadWord(bus, slot, func, 0)) != 0xFFFF) {
        class = pciConfigReadWord(bus, slot, func, 12);
    }
    return class;
}

uint16_t pciCheckVendor(uint8_t bus, uint8_t slot,uint8_t func) {
    uint16_t vendor, device;
    /* Try and read the first configuration register. Since there are no
     * vendors that == 0xFFFF, it must be a non-existent device. */
    if ((vendor = pciConfigReadWord(bus, slot, func, 0)) != 0xFFFF) {
       device = pciConfigReadWord(bus, slot, func, 2);
    }
    else return 0xFFFF;
    return (vendor);
}
 void checkAllBuses(void) {
     uint16_t bus;
     uint8_t device;

     for (bus = 0; bus < 256; bus++) {
         for (device = 0; device < 32; device++) {
             checkDevice(bus, device);
         }
     }
 }
 void checkDevice(uint8_t bus, uint8_t device) {
     uint8_t function = 0;
     uint16_t vendorID,headerType, functionResult;
     vendorID = pciCheckVendor(bus, device, function);
     if (vendorID == 0xFFFF) return; // Device doesn't exist
     checkFunction(bus, device, function);
     headerType = getHeaderType(bus, device, function);
     if( (headerType & 0x80) != 0) {
         // It's a multi-function device, so check remaining functions
         for (function = 1; function < 8; function++) {
             if (pciCheckVendor(bus, device, function) != 0xFFFF) {
                 checkFunction(bus, device, function);
             }
         }
     }
     store_device_info(bus,device,function);
 }

 void checkFunction(uint8_t bus, uint8_t device, uint8_t function) {
     uint8_t baseClass;
     uint8_t subClass;
     uint8_t secondaryBus;

     baseClass = getBaseClass(bus, device, function);
     subClass = getSubClass(bus, device, function);
     if ((baseClass == 0x6) && (subClass == 0x4)) {
         secondaryBus = getSecondaryBus(bus, device, function);
         checkBus(secondaryBus);
     }
 }

void checkBus(uint8_t bus) {
     uint8_t device;

     for (device = 0; device < 32; device++) {
         checkDevice(bus, device);
     }
 }

 uint16_t getSecondaryBus(uint8_t bus, uint8_t slot,uint8_t func){
        uint16_t SecondBus,vendor;
        if ((vendor = pciConfigReadWord(bus, slot, func, 0)) != 0xFFFF) {
        SecondBus = pciConfigReadWord(bus, slot, func, 25);
        return SecondBus;
        }

}

 uint16_t getSubClass(uint8_t bus, uint8_t slot,uint8_t func){
        uint16_t subClass,vendor;
        if ((vendor = pciConfigReadWord(bus, slot, func, 0)) != 0xFFFF) {
        subClass = pciConfigReadWord(bus, slot, func, 11);
        }
        return subClass;
 }

uint8_t device = 0;
void store_device_info(uint8_t bus, uint8_t slot,uint8_t func){
    PCIdevice[device].vendorID = pciConfigReadWord(bus,slot,func, 0);
    PCIdevice[device].deviceID = pciConfigReadWord(bus,slot,func, 2);
    PCIdevice[device].command = pciConfigReadWord(bus,slot,func, 4);
    PCIdevice[device].status = pciConfigReadWord(bus,slot,func, 6);
    PCIdevice[device].revisionID = pciConfigReadWord(bus,slot,func, 8);
    PCIdevice[device].progIF = pciConfigReadWord(bus,slot,func, 9);
    PCIdevice[device].subClass = pciConfigReadWord(bus,slot,func, 10);
    PCIdevice[device].classCode = pciConfigReadWord(bus,slot,func, 11);
    PCIdevice[device].cacheLine = pciConfigReadWord(bus,slot,func, 12);
    PCIdevice[device].latencyTimer = pciConfigReadWord(bus,slot,func, 13);

    PCIdevice[device].headerType = pciConfigReadWord(bus,slot,func, 14);

    PCIdevice[device].BIST = pciConfigReadWord(bus,slot,func, 15);
    device++;
}
