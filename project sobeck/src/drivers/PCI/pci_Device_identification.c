#include "pci.h"
#include "liz_print.h"
void find_device(uint8_t bus , uint8_t device ,uint8_t function){

    uint8_t headertype = getHeaderType(bus,device,function);
    uint16_t vendorID = getVendorID(bus,device,function);
    uint16_t deviceID = getDeviceID(bus,device,function);
    uint16_t classID = getClassId(bus,device,function);
    uint16_t SubClassID = getSubClassId(bus,device ,function);
    uint8_t progIF = getProgIF(bus,device ,function);

    if(vendorID == 20){
        liz_print_str("loongson Tech Limited ");
    }
    if(vendorID == 28){
        liz_print_str("PEAK ");
    }
    if(vendorID == 176){
        liz_print_str("Blue Origin ");
    }
    if(vendorID == 187){
        liz_print_str("BloomBase ");
    }
    if(vendorID == 291){
        liz_print_str("general Dynamics  ");
    }
    if(vendorID == 302){
        liz_print_str("OLZETEK ");
    }
    if(vendorID == 440){
        liz_print_str("Sintela");
    }
    if(vendorID == 546){
        liz_print_str("Not For Radio ");
    }
    if(vendorID == 771){
        liz_print_str("DAQ System");
    }
    if(vendorID == 10114){
        liz_print_str("Emdoor Digital Tech ");
    }
    if(vendorID == 10193){
        liz_print_str("AngelBird Tech");
    }
    if(vendorID == 1160){
        liz_print_str("Cirque Corp");
    }
    if(vendorID == 12319){
        liz_print_str("Wolf Advanced");
    }
    if(vendorID == 1243){
        liz_print_str("Clever Information");
    }
    if(vendorID == 12544){
        liz_print_str("DynaBook");
    }
    if(vendorID == 12900){
        liz_print_str("RnD Center");
    }
    if(vendorID == 1318){
        liz_print_str("UniCompute Tech");
    }
    if(vendorID == 13378){
        liz_print_str("Bihl + Wiedemann");
    }
    if(vendorID == 13429){
        liz_print_str("Arista Networks");
    }
    if(vendorID == 14402){
        liz_print_str("EVGA Corporation");
    }
    if(vendorID == 1550){
        liz_print_str("Lightelligence Inc");
    }
    if(vendorID == 15854){
        liz_print_str("SunRise Memory Corp");
    }
    if(vendorID == 16708){
        liz_print_str("Alpha Data Parrallel Sytems");
    }
    if(vendorID == 16713){
        liz_print_str("AIMOTIVE");
    }
    if(vendorID == 16723){
        liz_print_str("Active Silicon");
    }
    if(vendorID == 16888){
        liz_print_str("Shangai Cygnus SemiConductors");
    }
    if(vendorID ==17230){
        liz_print_str("Cornelis Network");
    }
    if(vendorID == 17491){
        liz_print_str("dSPACE");
    }
    if(vendorID == 17735){
        liz_print_str("Salland Engineering");
    }
    if(vendorID == 17750){
        liz_print_str("Evident Corp");
    }
    if(vendorID == 1841){
        liz_print_str("Changsha Jingjia");
    }
    if(vendorID == 19540){
        liz_print_str("Nanjing Lisuan");
    }
    if(vendorID == 19796){
        liz_print_str("Microtechnia Co");
    }
    if(vendorID == 19798){
        liz_print_str("Matrix Vision");
    }
    if(vendorID ==  7150){
        liz_print_str("HMS Tech");
    }
    if(vendorID == 7204){
        liz_print_str("Elma Electronics");
    }
    if(vendorID == 20056){
        liz_print_str("Nutanix");
    }
    if(vendorID == 20203){
        liz_print_str("Nebulon");
    }
    if(vendorID == 2048){
        liz_print_str("Hirota Seisakusho");
    }
    if(vendorID == 20673){
        liz_print_str("Socionext");
    }
    if(vendorID == 2083){
        liz_print_str("Hangzhou");
    }
    if(vendorID == 21331){
        liz_print_str("Iodyne");
    }
    if(vendorID == 21844){
        liz_print_str("ARL");
    }
    if(vendorID == 22104){
        liz_print_str("VX Insruments");
    }
    if(vendorID == 22339){
        liz_print_str("WALTON DIGI-TCH");
    }
    if(vendorID == 22597){
        liz_print_str("Extreme Engineering Solutions ");
    }
    if(vendorID == 22611){
        liz_print_str("Citrix UK");
    }
    if(vendorID == 22873){
        liz_print_str("jiangsu Yunyong Systems");
    }
    if(vendorID == 2313){
        liz_print_str("Intelligence Draw Microelectronics");
    }
    if(vendorID == 26248){
        liz_print_str("GUANGZHOU MAXSUN INFORMATION ");
    }
    if(vendorID == 26470){
        liz_print_str("GlenFly Tech");
    }
    if(vendorID == 26777){
        liz_print_str("ZT System");
    }
    if(vendorID == 2684){
        liz_print_str("Aurora Inovation");
    }
    if(vendorID == 27998){
        liz_print_str("Guntermann & Drunck");
    }
    if(vendorID == 28755){
        liz_print_str("Synology Inc");
    }
    if(vendorID == 2888){
        liz_print_str("ITTIM Tech");
    }
    if(vendorID == 29559){
        liz_print_str("Shenzhen ColorfulYugong Technology");
    }
    if(vendorID == 2990){
        liz_print_str("BachMann Electronic");
    }
    if(vendorID == 29978){
        liz_print_str("Tesla INC");
    }
    if(vendorID == 30024){
        liz_print_str("INUITIVE LTD");
    }
    if(vendorID == 30912){
        liz_print_str("Herrick Tech");
    }
    if(vendorID == 3277){
        liz_print_str("Preferred Networks");
    }
    if(vendorID == 32777){
        liz_print_str("Shengli Tech");
    }
    if(vendorID == 32896){
        liz_print_str("StoreSwift Tech");
    }
    if(vendorID == 32902){
        liz_print_str("Intel Corp");
    }
    if(vendorID == 32904){
        liz_print_str("Beijing Wangxun Tech");
    }
    if(vendorID == 34064){
        liz_print_str("Xi'an Sietium SemiConductor");
    }
    if(vendorID == 34438){
        liz_print_str("SAP SE");
    }
    if(vendorID == 34888){
        liz_print_str("Wuxi Micro Innovation");
    }
    if(vendorID == 36864){
        liz_print_str("C-Core Technology");
    }
    if(vendorID == 38739){
        liz_print_str("PEZY Computing K.K");
    }
    if(vendorID == 39321){
        liz_print_str("MetaX Integrated Circuits");
    }
    if(vendorID == 40242){
        liz_print_str("Beijing StarBlaze");
    }
    if(vendorID == 40296){
        liz_print_str("Brite SemiConductor Shanhghai");
    }
    if(vendorID == 4115){
        liz_print_str("Cirrus Logic INC");
    }
    if(vendorID == 4116){
        liz_print_str("IBM");
    }
    if(vendorID == 4120){
        liz_print_str("Unisys Corp");
    }
    if(vendorID == 4121){
        liz_print_str("EliteGroup Computer System");
    }
    if(vendorID == 4126){
        liz_print_str("AMI US Holding && AMI");
    }
    if(vendorID == 4129){
        liz_print_str("OKI Electronic Industry");
    }
    if(vendorID == 4130){
        liz_print_str("Advanced Mico Devices");
    }
    if(vendorID == 4132){
        liz_print_str("Beiing Dajia Internet Information Tech");
    }
    if(vendorID == 4136){
        liz_print_str("Dell Computer Corp");
    }
    if(vendorID == 4139){
        liz_print_str("Matrox Graphics INC");
    }
    if(vendorID == 41531){
        liz_print_str("Silicon Integrated Systems");
    }
    if(vendorID == 4156){
        liz_print_str("Hewlett Packard");
    }
    if(vendorID == 4163){
        liz_print_str("Asuteck Computer INC");
    }
    if(vendorID == 4170){
        liz_print_str("STMicroElectronics International");
    }
    if(vendorID == 4172){
        liz_print_str("Texas Insruments");
    }
    if(vendorID == 4173){
        liz_print_str("Sony Group`");
    }
    if(vendorID == 4180){
        liz_print_str("Hitachi");
    }
    if(vendorID == 4185){
        liz_print_str("Kontron");
    }
    if(vendorID == 4186){
        liz_print_str("Promise Tech");
    }

    //page2 on website
}
