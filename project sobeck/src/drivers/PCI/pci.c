#include "sys_inf.h"
#include "io.h"
#include "pci.h"
#include "liz_print.h"


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
            liz_print_str("unknown pci device\n");
        }
        if(getSubClassID == 1){
            liz_print_str("unkown vga device\n");
        }
    }
    else if(classID == 1){
        if(getSubClassID == 0){
            liz_print_str("IDE SCISI BUS Controller\n");
        }
        else if(getSubClassID == 1){
            if(progIF== 0){
                liz_print_str("IDE ISA compatibility only controller\n");
            }
            if(progIF== 5){
                liz_print_str("IDE PCI Native mode only controler\n");
            }
            if(progIF== 10){
                liz_print_str("IDE ISA compatibility supports both\n");
            }
            if(progIF== 15){
                liz_print_str("IDE PCI Native mode supports both\n");
            }
            if(progIF== 128){
                liz_print_str("IDE ISA compatibility only controller supports bus mastering\n");
            }
            if(progIF== 133){
                liz_print_str("IDE PCI Native mode only controler supports bus mastering\n");
            }
            if(progIF== 138){
                liz_print_str("IDE ISA compatibility supports both suppotsbus mastering\n");
            }
            if(progIF== 143){
                liz_print_str("IDE PCI Native mode supports both supports bus mastering\n");
            }
        }
        else if(getSubClassID == 2){
            liz_print_str("floppy controller\n");
        }
        else if(getSubClassID == 3){
            liz_print_str("IPI bus Controller\n");
        }
        else if(getSubClassID == 4){
            liz_print_str("RAID Cotroller\n");
        }
        else if(getSubClassID == 5){
            if(progIF == 32){
                liz_print_str("ATA single DMA\n");
            }
            if(progIF == 48){
                liz_print_str("ATA Double DMA\n");
            }
        }
        else if(getSubClassID == 6){
            if(progIF == 0){
                liz_print_str("SATA vendor Specific\n");
            }
            if(progIF == 1){
                liz_print_str("AHCI 1.0 \n");
            }
            if(progIF == 2){
                liz_print_str("SATA Serial storage\n");
            }
        }
        else if(getSubClassID == 7){
            if(progIF == 0){
                liz_print_str("SCISI SAS\n");
            }
            if(progIF == 1){
                liz_print_str("SCISI Serial Bus\n");
            }
        }
        else if(getSubClassID == 8){
            if(progIF == 1){
                liz_print_str("NVMHCI\n");
            }
            if(progIF == 2){
                liz_print_str("NVM Exspress\n");
            }
        }
        else{
            liz_print_str("unkown msm\n");
        }
    }
    else if(classID == 2){
       if(getSubClassID == 0){
           liz_print_str("Eithernet controller\n");
       }
       else if(getSubClassID ==1){
           liz_print_str("Token Ring Controller\n");
       }
       else if(getSubClassID ==2){
           liz_print_str("FDDI controler\n");
       }
       else if(getSubClassID ==3){
           liz_print_str("ATM Controller\n");
       }
       else if(getSubClassID ==4){
           liz_print_str("ISDN Controller\n");
       }
       else if(getSubClassID ==5){
           liz_print_str("World Flip Controller\n");\
       }
       else if(getSubClassID ==6){
           liz_print_str("PICMG 2.14 Controller\n");
       }
       else if(getSubClassID ==7){
           liz_print_str("Infiniband controller\n");
       }
       else if(getSubClassID ==8){
           liz_print_str("Fabric controller\n");
       }
       else{
           liz_print_str("unknown network controller\n");
       }
    }
    else if(classID == 3){
        if(getSubClassID == 0){
            if(progIF == 0){
                liz_print_str("vga controller detected\n");
            }
            if(progIF == 1){
                liz_print_str("8514-Compatible Controller detected\n");
            }
        }
        else if(getSubClassID == 1){
            liz_print_str("xga detected\n");
        }
        else if(getSubClassID == 2){
            liz_print_str("3d non vga detected\n");
        }
        else{
            liz_print_str("uknown graphics controller \n");
        }
    }
    else if(classID == 4){
        if(getSubClassID == 0){
            liz_print_str("Multimedia Video \n");
        }
        else if(getSubClassID == 1){
            liz_print_str("Multimedia Audio\n");
        }
        else if(getSubClassID == 2){
            liz_print_str("Computer Telephony \n");
        }
        else if(getSubClassID == 3){
            liz_print_str("Audio Device\n");
        }
        else{
            liz_print_str("Unkown Media Device\n");
        }
    }
    else if(classID == 5){
        if(getSubClassID == 0){
            liz_print_str("Ram Controller\n");
        }
        else if(getSubClassID == 1){
            liz_print_str("Flash Controler\n");
        }
        else{
            liz_print_str("Unkown Memory Controller\n");
        }
    }
    else if(classID == 6){
        if(getSubClassID == 0){
            liz_print_str("Host Bridge\n");
        }
        else if(getSubClassID == 1){
            liz_print_str("ISA Bridge\n");
        }
        else if(getSubClassID == 2){
            liz_print_str("EISA Bridge\n");
        }
        else if(getSubClassID == 3){
            liz_print_str("MCA Bridge\n");
        }
        else if(getSubClassID == 4){
            if(progIF == 0){
                liz_print_str("PCI Bridge Normal Decode\n");
            }
            if(progIF == 1){
                liz_print_str("PCI Bridge Subtractive Decode\n");
            }
        }
        else if(getSubClassID == 5){
            liz_print_str("PCMCIA Bridge\n");
        }
        else if(getSubClassID == 6){
            liz_print_str("NuBus Bridge\n");
        }
        else if(getSubClassID == 7){
            liz_print_str("CardBus Bridge\n");
        }
        else if(getSubClassID == 8){
            if(progIF == 0){
            liz_print_str("RACEway Transparent Mode\n");
            }
            if(progIF == 1){
                liz_print_str("RACEway Endpoint Mode\n");
            }
        }
        else if(getSubClassID == 9){
            if(progIF == 64){
                liz_print_str("STP Buss Towards Host Cpu\n");
            }
            if(progIF == 128){
                liz_print_str("STS Buss Towards Host Cpu\n");
            }
        }
        else if(getSubClassID == 10){
            liz_print_str("InfiniBand To PCI Bridge\n");
        }
        else{
            liz_print_str("Unkown Bridge\n");
        }
    }
    else if(classID == 7){
        if(getSubClassID == 0){
            if(progIF == 0){
                liz_print_str("8250 Compatible Serial Controller Generic\n");
            }
            if(progIF == 1){
                liz_print_str("16450  compatible serial Controller\n");
            }
            if(progIF == 2){
                liz_print_str("16550 compatible serial Controller\n");
            }
            if(progIF == 3){
                liz_print_str("16650 Compatible serial Controller\n");
            }
            if(progIF == 4){
                liz_print_str("16750  Compatible Serial Controller\n");
            }
            if(progIF == 5){
                liz_print_str("16850 Compatible Serial Controller\n");
            }
            if(progIF == 6){
                liz_print_str("16950 compatible Serial Controller");
            }
        }
        else if(getSubClassID == 1){
            if(progIF == 0){
                liz_print_str("Standard Parallel Port\n");
            }
            if(progIF == 1){
                liz_print_str("Bi Directional Parallel Port\n");
            }
            if(progIF == 2){
                liz_print_str("ECP 1.x complient Parallel Port\n");
            }
            if(progIF == 3){
                liz_print_str("IEEE 1284 Controller\n");
            }
            if(progIF == 254){
                liz_print_str("IEEE 1248 Target Device\n");
            }
        }
        else if(getSubClassID == 2){
            liz_print_str("MultiPort Serial Controller");
        }
        else if(getSubClassID == 3){
            if(progIF == 0){
                liz_print_str("Generic Modem\n");
            }
            if(progIF == 1){
                liz_print_str("Hayes 16450 Compatible Interface\n");
            }
            if(progIF == 2){
                liz_print_str("Hayes 16550 Compatible Interface \n");
            }
            if(progIF == 3){
                liz_print_str("Hayes 16650 Compatible Interface\n");
            }
            if(progIF == 4){
                liz_print_str("Hayes 16750 Compatible Interface\n");
            }
        }
        else if(getSubClassID == 4){
            liz_print_str("IEEE 488.1/2 GPIB Controller\n");
        }
        else if(getSubClassID == 5){
            liz_print_str("SmartCard Controller\n");
        }
        else{
            liz_print_str("Unkown simple Compuniation Device\n");
        }
    }
    else if(classID == 8){
        if(getSubClassID == 0){
            if(progIF == 0){
                liz_print_str("Generic 8259 Compatible PIC\n");
            }
            if(progIF == 1){
                liz_print_str("ISA Compatible PIC\n");
            }
            if(progIF == 2){
                liz_print_str("EISA Compatible PIC\n");
            }
            if(progIF == 16){
                liz_print_str("I/O APIC Interrupt Controler\n");
            }
            if(progIF == 24){
                liz_print_str("I/O(x) APIC Interrupt Controller\n");
            }
        }
        else if(getSubClassID == 1){
            if(progIF == 0){
                liz_print_str("Generi 8237 Compatible DMA Controller\n");
            }
            if(progIF == 1){
                liz_print_str("ISA Compatible DMA Controller\n");
            }
            if(progIF == 2){
                liz_print_str("EISA Compatible DMA Controller\n");
            }
        }
        else if(getSubClassID == 2){
            if(progIF == 0){
                liz_print_str("Generic 8254 Compatible Timer\n");
            }
            if(progIF == 1){
                liz_print_str("ISA Compatible Timer\n");
            }
            if(progIF == 2){
                liz_print_str("EISA Compatible Timer\n");
            }
            if(progIF == 3){
                liz_print_str("HPET Timer\n");
            }
        }
        else if(getSubClassID == 3){
            if(progIF == 0){
                liz_print_str("Generic RTC Controller\n");
            }
            if(progIF == 1){
                liz_print_str("ISA RTC Controller\n");
            }
        }
        else if(getSubClassID == 4){
            liz_print_str("PCI Hot Plug Controller\n");
        }
        else if(getSubClassID == 5){
            liz_print_str("SD Host Controller\n");
        }
        else if(getSubClassID == 6){
            liz_print_str("IOMMU Controller\n");
        }
        else{
            liz_print_str("Unkown System Periphial \n");
        }
    }
    else if(classID == 9){
        if(getSubClassID == 0){
            liz_print_str("Keyboard Controller\n");
        }
        else if(getSubClassID == 1){
            liz_print_str("Digitizer Pen\n");
        }
        else if(getSubClassID == 2){
            liz_print_str("Mouse Controller\n");
        }
        else if(getSubClassID == 3){
            liz_print_str("Scanner Controler\n");
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
            liz_print_str("unknown input device\n");
        }
    }

    else if(classID == 10){
        if(getSubClassID == 0){
            liz_print_str("generic\n");
        }
        else{
            liz_print_str("other\n");
        }
    }
    else if(classID == 11){
        if(getSubClassID == 0){
            liz_print_str("386 Processor\n");
        }
        else if(getSubClassID == 1){
            liz_print_str("486 Processor\n");
        }
        else if(getSubClassID == 2){
            liz_print_str("Pentium Processor\n");
        }
        else if(getSubClassID == 3){
            liz_print_str("Pentium Pro Processor\n");
        }
        else if(getSubClassID == 16){
            liz_print_str("ALPHA Processor\n");
        }
        else if(getSubClassID == 32){
            liz_print_str("PowerPC Processor\n");
        }
        else if(getSubClassID == 48){
            liz_print_str("MIPS Processor\n");
        }
        else if(getSubClassID == 64){
            liz_print_str("Co Processor \n");
        }
        else{
            liz_print_str("Unkown Processor\n");
        }
    }
    else if(classID == 12){
        if(getSubClassID == 0){
            if(progIF == 0){
                liz_print_str("FireWire IEEE 1394 Generic\n");
            }
            if(progIF == 16 ){
                liz_print_str("FireWire IEEE 1394 OHCI\n");
            }
        }
        else if(getSubClassID == 1){
            liz_print_str("ACCESS Bus Controller");
        }
        else if(getSubClassID == 2){
            liz_print_str("SSA Serial Bus");
        }
        else if(getSubClassID == 3){
            if(progIF == 0){
                liz_print_str("UHCI USB  Controller\n");
            }
            if(progIF == 16){
                liz_print_str("OHCI USB Controller\n");
            }
            if(progIF == 32){
                liz_print_str("EHCI USB2 Controller\n");
            }
            if(progIF == 48){
                liz_print_str("XHCI USB 3 Controller\n");
            }
            if(progIF == 128){
                liz_print_str("Unspecified USB Controller\n");
            }
            if(progIF == 258){
                liz_print_str("USB device Non Controller\n");
            }
        }
        else if(getSubClassID == 4){
            liz_print_str("Fibre Channel\n");
        }
        else if(getSubClassID == 5){
            liz_print_str("SMS Bus Controller\n");
        }
        else if(getSubClassID == 6){
            liz_print_str("InfinBand Controller\n");
        }
        else if(getSubClassID == 7){
            if(progIF == 0){
                liz_print_str("SMIX IPMI DEVICE\n");
            }
            if(progIF == 1){
                liz_print_str("Keyboard IPMI Controller\n");
            }
            if(progIF == 2){
                liz_print_str("IPMI Block Transfer\n");
            }
        }
        else if(getSubClassID == 8){
            liz_print_str("Sercos Interface IEC 61491\n");
        }
        else if(getSubClassID == 9){
            liz_print_str("CANBus Controller\n");
        }
        else{
            liz_print_str("Unkown Serial Bus\n");
        }
    }
    else if(classID == 13){
        if(getSubClassID == 0){
            liz_print_str("iRDA Compatible Controller\n");
        }
        if(getSubClassID == 1){
            liz_print_str("Consumer IR Controller\n");
        }
        if(getSubClassID == 16){
            liz_print_str("RF Controler\n");
        }
        if(getSubClassID == 17){
            liz_print_str("Bluetooth Controller\n");
        }
        if(getSubClassID == 18){
            liz_print_str("BroadBand Controller\n");
        }
        if(getSubClassID == 32){
            liz_print_str("Eithernet 802.1a Controller\n");
        }
        if(getSubClassID == 128){
            liz_print_str("Eithernet 802.1b Controller\n");
        }
        else{
            liz_print_str("Unkown Wireless Controller\n");
        }
    }
    else if(classID == 14){
        liz_print_str("Intelligent Controller\n");
    }
    else if(classID == 15){
        if(getSubClassID == 1){
            liz_print_str("Satalite TV Controller\n");
        }
        else if(getSubClassID == 2){
            liz_print_str("Satalite Audio Controller\n");
        }
        else if(getSubClassID == 3){
            liz_print_str("Satalite Voice Controller\n");
        }
        else if(getSubClassID == 4){
            liz_print_str("Satalite DATA Controller\n");
        }
    }
    else if(classID == 16){
        if(getSubClassID == 0){
            liz_print_str("NETWORK encrypt/decrypt device\n");
        }
        if(getSubClassID == 16){
            liz_print_str("Entertainment Ecrypt/Decrypt Device\n");
        }
        else{
            liz_print_str("Unknown Encryption Controller\n");
        }
    }
    else if(classID == 17){
        if(getSubClassID == 0){
            liz_print_str("DPIO Modules\n");
        }
        else if(getSubClassID == 1){
            liz_print_str("Performance Counters\n");
        }
        else if(getSubClassID == 16){
            liz_print_str("Communication Synchronizer\n");
        }
        else if(getSubClassID == 32){
            liz_print_str("Signal Processing Management\n");
        }
        else{
            liz_print_str("UnKnown Signal Processing Device\n");
        }
    }
    else if(classID == 18){
        liz_print_str("Processing Accelertor");
    }
    else if(classID == 19){
        liz_print_str("non Essential Processing Accelertor");
    }
    else if((classID <= 20) && (classID >= 63)){
        liz_print_str("Reserved Device");
    }
    else if(classID == 64){
        liz_print_str("Co Processor\n");
    }
    else if((classID <= 65) && (classID >= 254))liz_print_str("reserved device\n");
    else if(classID == 255)liz_print_str("unassigned class vendor specific\n");
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

