#include "sys_inf.h"
#include "io.h"
#include "pci.h"
#include "liz_print.h"
#include "kernel_native_drivers.h"

void Debug_PCI(uint8_t bus, uint8_t slot,uint8_t func);


uint16_t pci_read(uint16_t bus,uint16_t device,uint16_t function,uint32_t registeroffset){
	uint64_t address;
    uint64_t lbus = (uint64_t)bus;
    uint64_t lslot = (uint64_t)device;
    uint64_t lfunc = (uint64_t)function;
    uint16_t tmp = 0;
    address = (uint64_t)((lbus << 16) | (lslot << 11) |
              (lfunc << 8) | (registeroffset & 0xfc) | ((uint32_t)0x80000000));
    outl(0xCF8, address);
    tmp = (uint16_t)((inl(0xCFC) >> ((registeroffset & 2) * 8)) & 0xffff);
    return tmp;
}


void pci_write(uint16_t bus,uint16_t device,uint16_t function,uint32_t registeroffset,uint32_t value){
	uint64_t address;
    uint64_t lbus = (uint64_t)bus;
    uint64_t lslot = (uint64_t)device;
    uint64_t lfunc = (uint64_t)function;
    uint16_t tmp = 0;
    address = (uint64_t)((lbus << 16) | (lslot << 11) |
              (lfunc << 8) | (registeroffset & 0xfc) | ((uint32_t)0x80000000));
    outl (0xCF8, address);
    outl(0xFC8, value);
}

uint16_t getVendorID(uint16_t bus, uint16_t device, uint16_t function)
{
        uint32_t r0 = pci_read(bus,device,0,0);
        return r0;
}

void FindPciDevice(){
    uint8_t function1 = 0;
    for(int bus = 0;bus < 256; bus++){
        for(int device = 0; device < 32;  device++){
                    uint8_t headerType = (pci_read(bus, device, function1, 0x0D) & ~0xFF00);
                    uint16_t vendor = getVendorID(bus,device,function1);
                    if(vendor != 0xffff){
                    store_device_info(bus,device,function1);
                     
                    if((headerType & 0x80) == 0){
                    for(uint8_t function = 1; function < 8; function++){
                             if (vendor != 0xffff){
                             store_device_info(bus,device,function);             
                          }                              
                    }
                }
            }
     }
}
}

uint16_t getDeviceID(uint16_t bus, uint16_t device, uint16_t function)
{
        uint32_t r0 = pci_read(bus,device,function,2);
        return r0;
}





uint16_t getClassId(uint16_t bus, uint16_t device, uint16_t function)
{
        uint32_t r0 = pci_read(bus,device,function,0xA);
        return (r0 & ~0x00FF) >> 8;
}

uint16_t getSubClassId(uint16_t bus, uint16_t device, uint16_t function)
{
        uint32_t r0 = pci_read(bus,device,function,0xA);
        return (r0 & ~0xFF00);
}



uint8_t getHeaderType(uint8_t bus,uint8_t slot,uint8_t function){
    uint8_t headertype = pci_read(bus, slot, function, 0x0D) && ~0xFF00;
    return headertype;
}


uint8_t getProgIF(uint16_t bus, uint16_t device, uint16_t function)
{
        uint32_t r0 = pci_read(bus,device,function,0x08);
        return (r0 & ~0x00FF) >> 8;
}

uint8_t device = 0;
pci_device_table PCIdevice;
void store_device_info(uint8_t bus, uint8_t slot,uint8_t func){

    uint8_t headertype = getHeaderType(bus,slot,func);
    uint16_t vendorID = getVendorID(bus,slot,func);
    uint16_t deviceID = getDeviceID(bus,slot,func);
    uint16_t classID = getClassId(bus,slot,func);
    uint16_t getSubClassID = getSubClassId(bus,slot,func);
    uint8_t progIF = getProgIF(bus,slot,func);


    if(classID == 0){
        if(getSubClassID == 0){

        }
        if(getSubClassID == 1){

        }
    }
    else if(classID == 1){
        if(getSubClassID == 0){
            liz_print_str("IDE SCISI BUS Controller ");

        }
        else if(getSubClassID == 1){
            if(progIF== 0){
                liz_print_str("IDE ISA compatibility only controller ");

            }
            if(progIF== 5){
                liz_print_str("IDE PCI Native mode only controler ");

            }
            if(progIF== 10){
                liz_print_str("IDE ISA compatibility supports both ");

            }
            if(progIF== 15){
                liz_print_str("IDE PCI Native mode supports both ");

            }
            if(progIF== 128){
                liz_print_str("IDE ISA compatibility only controller supports bus mastering ");

            }
            if(progIF== 133){
                liz_print_str("IDE PCI Native mode only controler supports bus mastering ");

            }
            if(progIF== 138){
                liz_print_str("IDE ISA compatibility supports both suppotsbus mastering");

            }
            if(progIF== 143){
                liz_print_str("IDE PCI Native mode supports both supports bus mastering ");

            }
        }
        else if(getSubClassID == 2){
            liz_print_str("floppy controller ");

        }
        else if(getSubClassID == 3){
            liz_print_str("IPI bus Controller ");

        }
        else if(getSubClassID == 4){
            liz_print_str("RAID Cotroller ");

        }
        else if(getSubClassID == 5){
            if(progIF == 32){
                liz_print_str("ATA single DMA ");

            }
            if(progIF == 48){
                liz_print_str("ATA Double DMA ");

            }
        }
        else if(getSubClassID == 6){
            if(progIF == 0){
                liz_print_str("SATA vendor Specific ");

            }
            if(progIF == 1){
                liz_print_str("AHCI 1.0");

            }
            if(progIF == 2){
                liz_print_str("SATA Serial storage ");

            }
        }
        else if(getSubClassID == 7){
            if(progIF == 0){
                liz_print_str("SCISI SAS ");

            }
            if(progIF == 1){
                liz_print_str("SCISI Serial Bus ");

            }
        }
        else if(getSubClassID == 8){
            if(progIF == 1){
                liz_print_str("NVMHCI ");

            }
            if(progIF == 2){
                liz_print_str("NVM Exspress ");

            }
        }
        else{
            find_device(bus,device,func);
        }
    }
    else if(classID == 2){
       if(getSubClassID == 0){
           liz_print_str("Eithernet controller ");

       }
       else if(getSubClassID ==1){
           liz_print_str("Token Ring Controller ");

       }
       else if(getSubClassID ==2){
           liz_print_str("FDDI controler ");

       }
       else if(getSubClassID ==3){
           liz_print_str("ATM Controller ");

       }
       else if(getSubClassID ==4){
           liz_print_str("ISDN Controller ");

       }
       else if(getSubClassID ==5){
           liz_print_str("World Flip Controller ");

       }
       else if(getSubClassID ==6){
           liz_print_str("PICMG 2.14 Controller ");

       }
       else if(getSubClassID ==7){
           liz_print_str("Infiniband controller ");

       }
       else if(getSubClassID ==8){
           liz_print_str("Fabric controller ");

       }
       else{
            find_device(bus,device,func);
       }
    }
    else if(classID == 3){
        if(getSubClassID == 0){
            if(progIF == 0){
                liz_print_str("vga controller detected ");

            }
            if(progIF == 1){
                liz_print_str("8514-Compatible Controller detected ");

            }
        }
        else if(getSubClassID == 1){
            liz_print_str("xga detected ");

        }
        else if(getSubClassID == 2){
            liz_print_str("3d non vga detected ");

        }
        else{
            find_device(bus,device,func);
        }
    }
    else if(classID == 4){
        if(getSubClassID == 0){
            liz_print_str("Multimedia Video ");

        }
        else if(getSubClassID == 1){
            liz_print_str("Multimedia Audio ");

        }
        else if(getSubClassID == 2){
            liz_print_str("Computer Telephony ");

        }
        else if(getSubClassID == 3){
            liz_print_str("Audio Device ");

        }
        else{
            find_device(bus,device,func);
        }
    }
    else if(classID == 5){
        if(getSubClassID == 0){
            liz_print_str("Ram Controller ");

        }
        else if(getSubClassID == 1){
            liz_print_str("Flash Controler ");

        }
        else{
            find_device(bus,device,func);
        }
    }
    else if(classID == 6){
        if(getSubClassID == 0){
            liz_print_str("Host Bridge ");

        }
        else if(getSubClassID == 1){
            liz_print_str("ISA Bridge ");

        }
        else if(getSubClassID == 2){
            liz_print_str("EISA Bridge ");

        }
        else if(getSubClassID == 3){
            liz_print_str("MCA Bridge ");

        }
        else if(getSubClassID == 4){
            if(progIF == 0){
                liz_print_str("PCI Bridge Normal Decode ");

            }
            if(progIF == 1){
                liz_print_str("PCI Bridge Subtractive Decode ");

            }
        }
        else if(getSubClassID == 5){
            liz_print_str("PCMCIA Bridge ");

        }
        else if(getSubClassID == 6){
            liz_print_str("NuBus Bridge ");

        }
        else if(getSubClassID == 7){
            liz_print_str("CardBus Bridge ");

        }
        else if(getSubClassID == 8){
            if(progIF == 0){
            liz_print_str("RACEway Transparent Mode ");

            }
            if(progIF == 1){
                liz_print_str("RACEway Endpoint Mode ");

            }
        }
        else if(getSubClassID == 9){
            if(progIF == 64){
                liz_print_str("STP Buss Towards Host Cpu ");

            }
            if(progIF == 128){
                liz_print_str("STS Buss Towards Host Cpu ");

            }
        }
        else if(getSubClassID == 10){
            liz_print_str("InfiniBand To PCI Bridge ");

        }
        else{
            find_device(bus,device,func);
        }
    }
    else if(classID == 7){
        if(getSubClassID == 0){
            if(progIF == 0){
                liz_print_str("8250 Compatible Serial Controller Generic ");

            }
            if(progIF == 1){
                liz_print_str("16450  compatible serial Controller ");

            }
            if(progIF == 2){
                liz_print_str("16550 compatible serial Controller ");

            }
            if(progIF == 3){
                liz_print_str("16650 Compatible serial Controller ");

            }
            if(progIF == 4){
                liz_print_str("16750  Compatible Serial Controller ");

            }
            if(progIF == 5){
                liz_print_str("16850 Compatible Serial Controller ");

            }
            if(progIF == 6){
                liz_print_str("16950 compatible Serial Controller ");

            }
        }
        else if(getSubClassID == 1){
            if(progIF == 0){
                liz_print_str("Standard Parallel Port ");

            }
            if(progIF == 1){
                liz_print_str("Bi Directional Parallel Port ");

            }
            if(progIF == 2){
                liz_print_str("ECP 1.x complient Parallel Port ");

            }
            if(progIF == 3){
                liz_print_str("IEEE 1284 Controller ");

            }
            if(progIF == 254){
                liz_print_str("IEEE 1248 Target Device ");

            }
        }
        else if(getSubClassID == 2){
            liz_print_str("MultiPort Serial Controller ");

        }
        else if(getSubClassID == 3){
            if(progIF == 0){
                liz_print_str("Generic Modem ");

            }
            if(progIF == 1){
                liz_print_str("Hayes 16450 Compatible Interface ");

            }
            if(progIF == 2){
                liz_print_str("Hayes 16550 Compatible Interface ");

            }
            if(progIF == 3){
                liz_print_str("Hayes 16650 Compatible Interface ");

            }
            if(progIF == 4){
                liz_print_str("Hayes 16750 Compatible Interface ");

            }
        }
        else if(getSubClassID == 4){
            liz_print_str("IEEE 488.1/2 GPIB Controller ");

        }
        else if(getSubClassID == 5){
            liz_print_str("SmartCard Controller ");

        }
        else{
            liz_print_str("Unkown simple Compuniation Device ");
            find_device(bus,device,func);

        }
    }
    else if(classID == 8){
        if(getSubClassID == 0){
            if(progIF == 0){
                liz_print_str("Generic 8259 Compatible PIC ");

            }
            if(progIF == 1){
                liz_print_str("ISA Compatible PIC ");

            }
            if(progIF == 2){
                liz_print_str("EISA Compatible PIC ");

            }
            if(progIF == 16){
                liz_print_str("I/O APIC Interrupt Controler ");

            }
            if(progIF == 24){
                liz_print_str("I/O(x) APIC Interrupt Controller ");

            }
        }
        else if(getSubClassID == 1){
            if(progIF == 0){
                liz_print_str("Generi 8237 Compatible DMA Controller ");

            }
            if(progIF == 1){
                liz_print_str("ISA Compatible DMA Controller ");

            }
            if(progIF == 2){
                liz_print_str("EISA Compatible DMA Controller ");

            }
        }
        else if(getSubClassID == 2){
            if(progIF == 0){
                liz_print_str("Generic 8254 Compatible Timer ");

            }
            if(progIF == 1){
                liz_print_str("ISA Compatible Timer ");

            }
            if(progIF == 2){
                liz_print_str("EISA Compatible Timer ");

            }
            if(progIF == 3){
                liz_print_str("HPET Timer ");

            }
        }
        else if(getSubClassID == 3){
            if(progIF == 0){
                liz_print_str("Generic RTC Controller ");

            }
            if(progIF == 1){
                liz_print_str("ISA RTC Controller ");

            }
        }
        else if(getSubClassID == 4){
            liz_print_str("PCI Hot Plug Controller ");

        }
        else if(getSubClassID == 5){
            liz_print_str("SD Host Controller ");

        }
        else if(getSubClassID == 6){
            liz_print_str("IOMMU Controller ");

        }
        else{
            find_device(bus,device,func);
        }
    }
    else if(classID == 9){
        if(getSubClassID == 0){
            liz_print_str("Keyboard Controller ");

        }
        else if(getSubClassID == 1){
            liz_print_str("Digitizer Pen ");

        }
        else if(getSubClassID == 2){
            liz_print_str("Mouse Controller ");

        }
        else if(getSubClassID == 3){
            liz_print_str("Scanner Controler ");

        }
        else if(getSubClassID == 4){
            if(progIF == 0){
                liz_print_str("\n");

            }
            if(progIF == 16){
                liz_print_str("\n");

            }
        }
        else{
            find_device(bus,device,func);
        }
    }

    else if(classID == 10){
        if(getSubClassID == 0){
            liz_print_str("generic ");

        }
        else{
            liz_print_str("other ");

        }
    }
    else if(classID == 11){
        if(getSubClassID == 0){
            liz_print_str("386 Processor ");

        }
        else if(getSubClassID == 1){
            liz_print_str("486 Processor ");

        }
        else if(getSubClassID == 2){
            liz_print_str("Pentium Processor ");

        }
        else if(getSubClassID == 3){
            liz_print_str("Pentium Pro Processor ");

        }
        else if(getSubClassID == 16){
            liz_print_str("ALPHA Processor ");

        }
        else if(getSubClassID == 32){
            liz_print_str("PowerPC Processor ");

        }
        else if(getSubClassID == 48){
            liz_print_str("MIPS Processor ");

        }
        else if(getSubClassID == 64){
            liz_print_str("Co Processor ");

        }
        else{
            find_device(bus,device,func);
        }
    }
    else if(classID == 12){
        if(getSubClassID == 0){
            if(progIF == 0){
                liz_print_str("FireWire IEEE 1394 Generic ");

            }
            if(progIF == 16 ){
                liz_print_str("FireWire IEEE 1394 OHCI ");

            }
        }
        else if(getSubClassID == 1){
            liz_print_str("ACCESS Bus Controller ");

        }
        else if(getSubClassID == 2){
            liz_print_str("SSA Serial Bus ");

        }
        else if(getSubClassID == 3){
            if(progIF == 0){
                liz_print_str("UHCI USB  Controller ");
                find_device(bus,device,func);
            }
            if(progIF == 16){
                liz_print_str("OHCI USB Controller ");
                find_device(bus,device,func);
            }
            if(progIF == 32){
                liz_print_str("EHCI USB2 Controller ");
                find_device(bus,device,func);
            }
            if(progIF == 48){
                liz_print_str("XHCI USB 3 Controller ");
                find_device(bus,device,func);
            }
            if(progIF == 128){
                liz_print_str("Unspecified USB Controller ");
                find_device(bus,device,func);
            }
            if(progIF == 258){
                liz_print_str("USB device Non Controller ");
                find_device(bus,device,func);
            }
        }
        else if(getSubClassID == 4){
            liz_print_str("Fibre Channel ");

        }
        else if(getSubClassID == 5){
            liz_print_str("SMS Bus Controller ");

        }
        else if(getSubClassID == 6){
            liz_print_str("InfinBand Controller ");

        }
        else if(getSubClassID == 7){
            if(progIF == 0){
                liz_print_str("SMIX IPMI DEVICE ");

            }
            if(progIF == 1){
                liz_print_str("Keyboard IPMI Controller ");

            }
            if(progIF == 2){
                liz_print_str("IPMI Block Transfer ");

            }
        }
        else if(getSubClassID == 8){
            liz_print_str("Sercos Interface IEC 61491 ");

        }
        else if(getSubClassID == 9){
            liz_print_str("CANBus Controller ");

        }
        else{
            find_device(bus,device,func);
        }
    }
    else if(classID == 13){
        if(getSubClassID == 0){
            liz_print_str("iRDA Compatible Controller ");

        }
        if(getSubClassID == 1){
            liz_print_str("Consumer IR Controller ");

        }
        if(getSubClassID == 16){
            liz_print_str("RF Controler ");

        }
        if(getSubClassID == 17){
            liz_print_str("Bluetooth Controller ");

        }
        if(getSubClassID == 18){
            liz_print_str("BroadBand Controller ");

        }
        if(getSubClassID == 32){
            liz_print_str("Eithernet 802.1a Controller ");

        }
        if(getSubClassID == 128){
            liz_print_str("Eithernet 802.1b Controller ");

        }
        else{
            find_device(bus,device,func);
        }
    }
    else if(classID == 14){
        liz_print_str("Intelligent Controller ");

    }
    else if(classID == 15){
        if(getSubClassID == 1){
            liz_print_str("Satalite TV Controller ");

        }
        else if(getSubClassID == 2){
            liz_print_str("Satalite Audio Controller ");

        }
        else if(getSubClassID == 3){
            liz_print_str("Satalite Voice Controller ");

        }
        else if(getSubClassID == 4){
            liz_print_str("Satalite DATA Controller ");

        }
    }
    else if(classID == 16){
        if(getSubClassID == 0){
            liz_print_str("NETWORK encrypt/decrypt device ");

        }
        if(getSubClassID == 16){
            liz_print_str("Entertainment Ecrypt/Decrypt Device ");

        }
        else{
            find_device(bus,device,func);
        }
    }
    else if(classID == 17){
        if(getSubClassID == 0){
            liz_print_str("DPIO Modules ");

        }
        else if(getSubClassID == 1){
            liz_print_str("Performance Counters ");

        }
        else if(getSubClassID == 16){
            liz_print_str("Communication Synchronizer ");

        }
        else if(getSubClassID == 32){
            liz_print_str("Signal Processing Management ");

        }
        else{
        find_device(bus,device,func);
        }
    }
    else if(classID == 18){
        liz_print_str("Processing Accelertor ");

    }
    else if(classID == 19){
        liz_print_str("non Essential Processing Accelertor ");

    }
    else if((classID <= 20) && (classID >= 63)){
        liz_print_str("Reserved Device ");

    }
    else if(classID == 64){
        liz_print_str("Co Processor ");

    }
    else if((classID <= 65) && (classID >= 254))liz_print_str("reserved device ");
    else if(classID == 255)find_device(bus,device,func);
    else{

    }
}

void Debug_PCI(uint8_t bus, uint8_t slot,uint8_t func){


    uint8_t headertype = getHeaderType(bus,slot,func);
    uint16_t vendorID = getVendorID(bus,slot,func);
    uint16_t deviceID = getDeviceID(bus,slot,func);
    uint16_t classID = getClassId(bus,slot,func);
    uint16_t getSubClassID = getSubClassId(bus,slot,func);
    uint8_t progIF = getProgIF(bus,slot,func);

    liz_print_str("bus ");
    liz_print_hex(bus & 0xff);
    liz_print_str("slot ");
    liz_print_hex(slot & 0xff);
    liz_print_str("function ");
    liz_print_hex(func & 0xff);
    liz_print_str("\n");

    liz_print_str("header TYPE ");
    liz_print_hex((headertype & 0xff00) >> 8);
    liz_print_hex(headertype & 0xff);
    liz_print_str("\n");
    liz_print_str("vendorID ");
    liz_print_hex((vendorID & 0xff) >> 8);
    liz_print_hex(vendorID & 0xff);
    liz_print_str("\n");
    liz_print_str("device ");
    liz_print_hex((deviceID & 0xff) >> 8);
    liz_print_hex(deviceID & 0xff);
    liz_print_str("\n");
    device++;
    return;
}

