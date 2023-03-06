#include "pci.h"
#include "kernel_native_drivers.h"
#include "liz_print.h"
#include "OHCI.h"


void OHCI_USB1(uint8_t bus,uint8_t device,uint8_t function){
    liz_print_str("\nloading OHCI Drivers\n");
    Find_OHCI_Storage_Devices(bus,device,function);
}
void Find_OHCI_Storage_Devices(uint8_t bus,uint8_t device,uint8_t function){

}
