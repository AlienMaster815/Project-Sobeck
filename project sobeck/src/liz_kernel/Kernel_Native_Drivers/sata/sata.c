#include "alpha_variables.h"
#include "liz_print.h"
#include "kernel_native_drivers.h"
SATA_DRIVE_KERNEL drive[24];

uint8_t cd = 0; //"connected Device" not to be confused with MS-Dos Choose directory Command
void Reset_drives(uint8_t driveRS){
    if(driveRS != 0x00){
        drive[driveRS].slot = 0x00;
        drive[driveRS].device = 0x00;
        drive[driveRS].function = 0x00;
        drive[driveRS].DriverType = 0x00;
        
    }
    if(driveRS != 0x00){
        for(size_t i = 0; i < 24; i++){
            drive[i].slot = 0x00;
            drive[i].device = 0x00;
            drive[i].function = 0x00;
            drive[i].DriverType = 0x00;
            
        }
        cd = 0;
        
    }
}

void store_sata_drive(uint8_t bus,uint8_t device,uint8_t function,uint8_t DriverSelect ){
    if(cd >= 24){
        liz_print_str("drive limit reached");
        
    }
    drive[cd].slot = bus;
    drive[cd].device = device;
    drive[cd].function = function;
    drive[cd].DriverType = DriverSelect;
    init_sata_drive(drive[cd]);
    cd++;
}

uint32_t Read_Sata(uint8_t driveR, uint32_t valueR){
    uint32_t ret;
    if(drive[driveR].DriverType == 0x00)liz_print_str("Drive Does Not Exist");

    return ret;
}


void Write_Sata(uint8_t driveW, uint32_t valueW){
    if(drive[driveW].DriverType == 0x00)liz_print_str("Drive Does Not Exist");

}

void init_sata_drive(SATA_DRIVE_KERNEL driveL){
    if(driveL.DriverType == 0x01)init_ahci_drive(driveL);

}

