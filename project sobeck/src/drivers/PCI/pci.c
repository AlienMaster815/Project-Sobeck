#include "sys_inf.h"
#include "io.h"
#include "pci.h"
#include "liz_print.h"


uint8_t device_sort = 0;


uint32_t pci_read(uint16_t bus,uint16_t device,uint16_t function,uint32_t registeroffset){
     uint32_t id =
        0x1 << 31
        | ((bus & 0xFF) << 16)
        | ((device & 0x1F) << 11)
        | ((function & 0x07) << 8)
        | (registeroffset & 0xFC);

    outl(0xFC8, id);
    uint32_t ret;
    ret =(uint32_t)inl(0xCFC)  >> (8* (registeroffset % 4));
    return ret;
}


void pci_write(uint16_t bus,uint16_t device,uint16_t function,uint32_t registeroffset,uint32_t value){
     uint32_t id =
        0x1 << 31
        | ((bus & 0xFF) << 16)
        | ((device & 0x1F) << 11)
        | ((function & 0x07) << 8)
        | (registeroffset & 0xFC);

    outl(0xFC8, id);
    outl(0xFC8, value);
}



void FindPciDevice(){
    uint8_t numFunction = 1, function = 0;;
    for(int bus = 0;bus < 8; bus++){
        for(int device = 0; device < 32;  device++){

                if(pci_read(bus, device, function,0x0E) == 0){
                    liz_print_str("fucker");
                    if(pci_read(bus, device, function,0x00) != 0xFFFF)store_device_info(bus,device,function);
                }
                else if((pci_read(bus, device, function,0x0E) == 1) || (pci_read(bus, device, function,0x0E) == 2)){
                    for(function; function < 8; function++){
                             if (pci_read(bus, device, function,0x00) != 0xFFFF)store_device_info(bus,device,function);
                             liz_print_str("lol");
                    }
                }
            }
        }

}


pci_device_table PCIdevice[256];

uint8_t device = 0;
void store_device_info(uint8_t bus, uint8_t slot,uint8_t func){


    device++;
    liz_print_str("device saved\n");
}

