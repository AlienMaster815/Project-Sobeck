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
        liz_print_str("Hewlett Packard 1");
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
    if(vendorID == 4187){
        liz_print_str("Foxconn Hon Hai");
    }
    if(vendorID == 4203){
        liz_print_str("APPLE Computer");
    }

    if(vendorID == 4209){
        liz_print_str("MiTAC International");
    }
    if(vendorID == 4211){
        liz_print_str("Yamaha Corp");
    }
    if(vendorID == 4221){
        liz_print_str("Leadtek Research");
    }
    if(vendorID == 4238){
        liz_print_str("Oracle");
    }
    if(vendorID == 4243){
        liz_print_str("National Insruments");
    }
    if(vendorID == 4246){
        liz_print_str("Alcron");
    }
    if(vendorID == 4256){
        liz_print_str("Meidensha");
    }
    if(vendorID == 4268){
        liz_print_str("Honeywell");
    }
    if(vendorID == 4272){
        liz_print_str("Gainward ");
    }
    if(vendorID == 4274){
        liz_print_str("Raytheon ");
    }
    if(vendorID == 4282){
        liz_print_str("Mitsubishi Eletric Corperation");
    }
    if(vendorID == 4293){
        liz_print_str("Zerox ");
    }
    if(vendorID == 4299){
        liz_print_str("Omron");
    }

    if(vendorID == 4303){
        liz_print_str("Fujitsu");
    }
    if(vendorID == 4306){
        liz_print_str("Molex");
    }
    if(vendorID == 4307){
        liz_print_str("Jabil Circuit");
    }
    if(vendorID == 4315){
        liz_print_str("Rohm");
    }
    if(vendorID == 4316){
        liz_print_str("CERN");
    }
    if(vendorID == 4318){
        liz_print_str("NVIDIA");
    }
    if(vendorID == 4332){
        liz_print_str("RealTeck");
    }
    if(vendorID == 4334){
        liz_print_str("Xilinx");
    }
    if(vendorID == 4348){
        liz_print_str("I-O Data Device");
    }
    if(vendorID == 4354){
        liz_print_str("Creative Technology");
    }
    if(vendorID == 4358){
        liz_print_str("VIA Technologies");
    }
    if(vendorID == 4362){
        liz_print_str("Siemens AG");
    }
    if(vendorID == 4371){
        liz_print_str("Accton Tech");
    }
    if(vendorID == 4395){
        liz_print_str("heidelberg Druckmashinen");
    }
    if(vendorID == 43981){
        liz_print_str("Vadatech Inc");
    }
    if(vendorID == 4401){
        liz_print_str("NXP SemiConductors");
    }
    if(vendorID == 4404){
        liz_print_str("Mercury Computer Systems");
    }
    if(vendorID == 4405){
        liz_print_str("FujiFilm Buissness Inovation");
    }
    if(vendorID == 4407){
        liz_print_str("Cisco Systems");
    }
    if(vendorID == 4423){
        liz_print_str("Interface Corp");
    }
    if(vendorID == 44288){
        liz_print_str("Alta Data");
    }
    if(vendorID == 44304){
        liz_print_str("New Wave Design");
    }
    if(vendorID == 4431){
        liz_print_str("Digi International");
    }
    if(vendorID == 4436){
        liz_print_str("Buffalo ");
    }
    if(vendorID == 44378){
        liz_print_str("ADVA Optical Networking");
    }
    if(vendorID == 4444){
        liz_print_str("Photron");
    }
    if(vendorID == 4453){
        liz_print_str("Foresight imaging");
    }
    if(vendorID == 4456){
        liz_print_str("Thine electronics");
    }
    if(vendorID == 4457){
        liz_print_str("CDAC");
    }
    if(vendorID == 4464){
        liz_print_str("INVENTEC");
    }
    if(vendorID == 4473){
        liz_print_str("Toshiba");
    }
    if(vendorID == 4480){
        liz_print_str("Ricoh");
    }
    if(vendorID == 4489){
        liz_print_str("Panasonic Corporation");
    }
    if(vendorID == 4498){
        liz_print_str("Densan Co");
    }
    if(vendorID == 4501){
        liz_print_str("Ratoc Systems");
    }
    if(vendorID == 4509){
        liz_print_str("MORI Tech");
    }
    if(vendorID == 4511){
        liz_print_str("BULL SAS");
    }
    if(vendorID == 4513){
        liz_print_str("Hamamatsu Photonics");
    }
    if(vendorID == 4524){
        liz_print_str("Canon INC");
    }
    if(vendorID == 4543){
        liz_print_str("AstroDesign");
    }
    if(vendorID == 4550){
        liz_print_str("SCREEN Graphics Solutions");
    }
    if(vendorID == 4552){
        liz_print_str("Dolphin Interconnect Solutions");
    }
    if(vendorID == 4554){
        liz_print_str("IBEX");
    }
    if(vendorID == 4564){
        liz_print_str("Analog Device International");
    }
    if(vendorID == 4571){
        liz_print_str("SEGA CORPORATION");
    }
    if(vendorID == 4588){
        liz_print_str("Teledyne Dalsa");
    }
    if(vendorID == 4600){
        liz_print_str("Microchip Technology");
    }
    if(vendorID == 4612){
        liz_print_str("Lattice SemiConductor");
    }
    if(vendorID == 46272){
        liz_print_str("B4Com");
    }
    if(vendorID == 4631){
        liz_print_str("BayHub");
    }
    if(vendorID == 4641){
        liz_print_str("Contec");
    }
    if(vendorID == 4647){
        liz_print_str("Tech Source && EZIO");
    }
    if(vendorID == 4661){
        liz_print_str("SMART Modular");
    }
    if(vendorID == 4668){
        liz_print_str("Century System");
    }
    if(vendorID == 4669){
        liz_print_str("Engineering Design Team");
    }
    if(vendorID == 4676){
        liz_print_str("AVM AudioVisuelles");
    }
    if(vendorID == 4688){
        liz_print_str("Hitachi Solutions");
    }
    if(vendorID == 4691){
        liz_print_str("Guzik Tech");
    }
    if(vendorID == 4697){
        liz_print_str("Allied Telesis");
    }
    if(vendorID == 4699){
        liz_print_str("ASIX Electronics");
    }
    if(vendorID == 4703){
        liz_print_str("Concurrent Tech");
    }
    if(vendorID == 4712){
        liz_print_str("TekTronix");
    }
    if(vendorID == 4713){
        liz_print_str("Thales");
    }
    if(vendorID == 4719){
        liz_print_str("Silicon Motion");
    }
    if(vendorID == 4720){
        liz_print_str("Olympus Corp");
    }
    if(vendorID == 4725){
        liz_print_str("NetApp");
    }
    if(vendorID == 4737){
        liz_print_str("Yokogawa Eletric");
    }
    if(vendorID == 4739){
        liz_print_str("ITE Tech");
    }
    if(vendorID == 4759){
        liz_print_str("Shuttle");
    }
    if(vendorID == 4768){
        liz_print_str("Rockwell Automation");
    }
    if(vendorID == 4772){
        liz_print_str("NTT Electronics");
    }
    if(vendorID == 478){
        liz_print_str("Oxide Computer Company");
    }
    if(vendorID == 4783){
        liz_print_str("TDK");
    }
    if(vendorID == 4791){
        liz_print_str("Cognex");
    }
    if(vendorID == 4804){
        liz_print_str("Connect Tech");
    }
    if(vendorID == 4822){
        liz_print_str("Anologic");
    }
    if(vendorID == 4824){
        liz_print_str("Diodes/ pericom");
    }
    if(vendorID == 4827){
        liz_print_str("Annapolis Micro Systems");
    }
    if(vendorID == 4833){
        liz_print_str("Nintendo");
    }
    if(vendorID == 48573){
        liz_print_str("BlackMagic Design");
    }
    if(vendorID == 4862){
        liz_print_str("ESD Electronics");
    }
    if(vendorID == 4868){
        liz_print_str("Juniper Networks");
    }
    if(vendorID == 4879){
        liz_print_str("Advanet Inc");
    }
    if(vendorID == 4883){
        liz_print_str("YASKAWA Eletric");
    }
    if(vendorID == 4886){
        liz_print_str("Teradyne");
    }
    if(vendorID == 4895){
        liz_print_str("SIIG");
    }
    if(vendorID == 4898){
        liz_print_str("MIS Corprration");
    }
    if(vendorID == 4932){
        liz_print_str("Micron Tech");
    }
    if(vendorID == 4937){
        liz_print_str("Sumito electronics");
    }
    if(vendorID == 4958){
        liz_print_str("SeaLevel Systems");
    }
    if(vendorID == 4960){
        liz_print_str("Meinberg Fukuhren");
    }
    if(vendorID == 4963){
        liz_print_str("Phoenix");
    }
    if(vendorID == 4967){
        liz_print_str("Hitachi Zoesen");
    }
    if(vendorID == 4972){
        liz_print_str("CPI");
    }
    if(vendorID == 4980){
        liz_print_str("Silicom");
    }
    if(vendorID == 4986){
        liz_print_str("Mark Of the Unicorn");
    }
    if(vendorID == 4992){
        liz_print_str("Sanritx automation");
    }
    if(vendorID == 5003){
        liz_print_str("Tokyo Keiki");
    }
    if(vendorID == 5025){
        liz_print_str("Kawasaki");
    }
    if(vendorID == 5045){
        liz_print_str("ARM ");
    }
    if(vendorID == 5048){
        liz_print_str("Nokia Solutions");
    }
    if(vendorID == 5049){
        liz_print_str("ELECOM ");
    }
    if(vendorID == 50668){
        liz_print_str("Citadel Securities");
    }
    if(vendorID == 5068){
        liz_print_str("Barco");
    }
    if(vendorID == 5078){
        liz_print_str("KI Technology");
    }
    if(vendorID == 5093){
        liz_print_str("TeleSoft Tech");
    }
    if(vendorID == 5094){
        liz_print_str("ARGOSY RESEARCH");
    }
    if(vendorID == 5118){
        liz_print_str("ADVANTECH");
    }
    if(vendorID == 5127){
        liz_print_str("Lava Computer MFG");
    }
    if(vendorID == 5134){
        liz_print_str("GOEPEL");
    }
    if(vendorID == 5140){
        liz_print_str("MicroSoft");
    }
    if(vendorID == 5157){
        liz_print_str("Chelsio Comunications");
    }
    if(vendorID == 5160){
        liz_print_str("EDEC Linsey");
    }
    if(vendorID == 5171){
        liz_print_str("Eltec Elektronik");
    }
    if(vendorID == 5173){
        liz_print_str("RTD Embedded Tech");
    }
    if(vendorID == 5186){
        liz_print_str("Pheonix Contact Electronics");
    }
    if(vendorID == 51900){
        liz_print_str("Cambricon Tech");
    }
    if(vendorID == 5191){
        liz_print_str("AIM");
    }
    if(vendorID == 5194){
        liz_print_str("ADLINK");
    }
    if(vendorID == 5195){
        liz_print_str("VERINT");
    }
    if(vendorID == 5197){
        liz_print_str("SamSung Electronics");
    }
    if(vendorID == 5208){
        liz_print_str("Gigabyte Tech");
    }
    if(vendorID == 5217){
        liz_print_str("AVerMedia");
    }
    if(vendorID == 5218){
        liz_print_str("Micro Star");
    }
    if(vendorID == 5219){
        liz_print_str("Fast Corporation");
    }
    if(vendorID == 52307){
        liz_print_str("ScaleFlux");
    }
    if(vendorID == 52446){
        liz_print_str("Code Construct");
    }
    if(vendorID == 52460){
        liz_print_str("Curtiss Wright");
    }
    if(vendorID == 5258){
        liz_print_str("OPTO 22");
    }
    if(vendorID == 5260){
        liz_print_str("TUL");
    }
    if(vendorID == 5272){
        liz_print_str("TEWS");
    }
    if(vendorID == 52730){
        liz_print_str("NextSilicon");
    }
    if(vendorID == 5280){
        liz_print_str("Softing");
    }
    if(vendorID == 5284){
        liz_print_str("Lite On Tech");
    }
    if(vendorID == 5289){
        liz_print_str("HiverTec");
    }
    if(vendorID == 52922){
        liz_print_str("KEBA AG");
    }
    if(vendorID == 5312){
        liz_print_str("COMPAL");
    }
    if(vendorID == 5315){
        liz_print_str("MediaTek");
    }
    if(vendorID == 5325){
        liz_print_str("UGSI");
    }
    if(vendorID == 53265){
        liz_print_str("Jiedao Shanhghai");
    }
    if(vendorID == 5330){
        liz_print_str("TITAN");
    }
    if(vendorID == 5334){
        liz_print_str("ACCUsys Storage");
    }
    if(vendorID == 53347){
        liz_print_str("SolidRun");
    }
    if(vendorID == 5348){
        liz_print_str("BroadCom");
    }
    if(vendorID == 5355){
        liz_print_str("Seiko Epson");
    }
    if(vendorID == 5375){
        liz_print_str("TwinHead");
    }
    if(vendorID == 53772){
        liz_print_str("Chengdu BeiZhongWangXin Technology Co.Ltd");
    }
    if(vendorID == 5387){
        liz_print_str("Yamashita Systems");
    }
    if(vendorID == 5395){
        liz_print_str("TE");
    }
    if(vendorID == 5417){
        liz_print_str("ON SemiConductor");
    }
    if(vendorID == 5421){
        liz_print_str("Quanta");
    }
    if(vendorID == 5422){
        liz_print_str("Melec");
    }
    if(vendorID == 5443){
        liz_print_str("SkyWorks");
    }
    if(vendorID == 5446){
        liz_print_str("IOI Tech");
    }
    if(vendorID == 5447){
        liz_print_str("Mitutoyo");
    }
    if(vendorID == 5464){
        liz_print_str("Clevo");
    }
    if(vendorID == 5481){
        liz_print_str("Palit Micro");
    }
    if(vendorID == 5484){
        liz_print_str("VMagic Electronic");
    }
    if(vendorID == 5488){
        liz_print_str("Teledyne");
    }
    if(vendorID == 5494){
        liz_print_str("Osprey");
    }
    if(vendorID == 5520){
        liz_print_str("Hewlett packard 2");
    }
    if(vendorID == 5532){
        liz_print_str("Stratus Tech");
    }
    if(vendorID == 5541){
        liz_print_str("Toyota");
    }
    if(vendorID == 5549){
        liz_print_str("VMWare");
    }
    if(vendorID == 5560){
        liz_print_str("ADDI DATA");
    }
    if(vendorID == 5563){
        liz_print_str("PortWell");
    }
    if(vendorID == 5564){
        liz_print_str("Keysight");
    }
    if(vendorID == 5565){
        liz_print_str("DFI");
    }
    if(vendorID == 5583){
        liz_print_str("HGFSA");
    }
    if(vendorID == 5585){
        liz_print_str("Infineon");
    }
    if(vendorID == 5591){
        liz_print_str("Collins Aerospace");
    }
    if(vendorID == 5593){
        liz_print_str("Super Micro");
    }
    if(vendorID == 55930){
        liz_print_str("Speed Data Inc");
    }
    if(vendorID == 5600){
        liz_print_str("BlueCoat");
    }
    if(vendorID == 5607){
        liz_print_str("GET");
    }
    if(vendorID == 5644){
        liz_print_str("Pro Dex Oregon");
    }
    if(vendorID == 5645){
        liz_print_str("AAEON");
    }
    if(vendorID == 56577){
        liz_print_str("Digital Devices");
    }
    if(vendorID == 5673){
        liz_print_str("Kongsberg Defence & Aerospace");
    }
    if(vendorID == 5679){
        liz_print_str("R&S");
    }
    if(vendorID == 5695){
        liz_print_str("Renishaw");
    }
    if(vendorID == 5698){
        liz_print_str("Shenzhen Bitland");
    }
    if(vendorID == 5702){
        liz_print_str("NSW");
    }
    if(vendorID == 57050){
        liz_print_str("XIMEA");
    }
    if(vendorID == 5724){
        liz_print_str("Gidel");
    }
    if(vendorID == 5753){
        liz_print_str("Tokyo Electron");
    }
    if(vendorID == 5763){
        liz_print_str("StepTechnica");
    }
    if(vendorID == 5786){
        liz_print_str("Otari");
    }
    if(vendorID == 5827){
        liz_print_str("Synopsys");
    }
    if(vendorID == 5832){
        liz_print_str("Octasic");
    }
    if(vendorID == 5835){
        liz_print_str("Konica");
    }
    if(vendorID == 5838){
        liz_print_str("Roland");
    }
    if(vendorID == 58559){
        liz_print_str("EKF Elektronik");
    }
    if(vendorID == 5858){
        liz_print_str("Marvin Test Solutions");
    }
    if(vendorID == 5866){
        liz_print_str("Fuji Eletric");
    }
    if(vendorID == 5874){
        liz_print_str("Bosch");
    }
    if(vendorID == 5912){
        liz_print_str("Pixela");
    }
    if(vendorID == 5935){
        liz_print_str("SPARKLE");
    }
    if(vendorID == 5944){
        liz_print_str("L3Harris");
    }
    if(vendorID == 5945){
        liz_print_str("Interface Concepts");
    }
    if(vendorID == 5962){
        liz_print_str("Spirent Comunications");
    }
    if(vendorID == 5963){
        liz_print_str("PC Partner");
    }
    if(vendorID == 5967){
        liz_print_str("SAXA");
    }
    if(vendorID == 5980){
        liz_print_str("Audio Science");
    }
    if(vendorID == 5985){
        liz_print_str("Pickering Interfaces");
    }
    if(vendorID == 59984){
        liz_print_str("Emerson Automation");
    }
    if(vendorID == 6001){
        liz_print_str("InnoVision MultiMedia");
    }
    if(vendorID == 6008){
        liz_print_str("For A Company");
    }
    if(vendorID == 60110){
        liz_print_str("Endace Tech");
    }
    if(vendorID == 6012){
        liz_print_str("EBRAINS");
    }
    if(vendorID == 6020){
        liz_print_str("Lockheed Martin");
    }
    if(vendorID == 6034){
        liz_print_str("Artiza Networks");
    }
    if(vendorID == 6037){
        liz_print_str("OKB SAPR");
    }
    if(vendorID == 6038){
        liz_print_str("Forshungszentrum");
    }
    if(vendorID == 6048){
        liz_print_str("GENESYS LOGIC");
    }
    if(vendorID == 6058){
        liz_print_str("Lenovo");
    }
    if(vendorID == 60587){
        liz_print_str("GM Cruise");
    }
    if(vendorID == 606){
        liz_print_str("Solidigm");
    }
    if(vendorID == 6080){
        liz_print_str("WISTRON");
    }
    if(vendorID == 6083){
        liz_print_str("PROTOGATE");
    }
    if(vendorID == 6091){
        liz_print_str("Qualcomm*");
    }
    if(vendorID == 6093){
        liz_print_str("Cadence Design");
    }
    if(vendorID == 6094){
        liz_print_str("BCM");
    }
    if(vendorID == 6098){
        liz_print_str("SigBitz");
    }
    if(vendorID == 6099){
        liz_print_str("Areca Tech");
    }
    if(vendorID == 6120){
        liz_print_str("ChronTell");
    }
    if(vendorID == 6125){
        liz_print_str("ARBOR");
    }
    if(vendorID == 6131){
        liz_print_str("RDC SemiConductor");
    }
    if(vendorID == 61355){
        liz_print_str("Enfabrica");
    }
    if(vendorID == 6137){
        liz_print_str("GemTek");
    }
    if(vendorID == 6149){
        liz_print_str("Euresys");
    }
    if(vendorID == 6152){
        liz_print_str("nVent, Schroff");
    }
    if(vendorID == 6156){
        liz_print_str("IEI Integration");
    }
    if(vendorID == 6161){
        liz_print_str("Wipro");
    }
    if(vendorID == 6167){
        liz_print_str("JAE");
    }
    if(vendorID == 61713){
        liz_print_str("Framework Computers");
    }
    if(vendorID == 61719){
        liz_print_str("Rockport Networks");
    }
    if(vendorID == 6173){
        liz_print_str("eInfochips");
    }
    if(vendorID == 61790){
        liz_print_str("SiFive");
    }
    if(vendorID == 61904){
        liz_print_str("AJA Video");
    }
    if(vendorID == 6192){
        liz_print_str("Cohu");
    }
    if(vendorID == 6219){
        liz_print_str("SYSTEC");
    }
    if(vendorID == 6220){
        liz_print_str("Hirose Eletric");
    }
    if(vendorID == 6224){
        liz_print_str("Advantest");
    }
    if(vendorID == 6226){
        liz_print_str("Anritsu");
    }
    if(vendorID == 6228){
        liz_print_str("LG");
    }
    if(vendorID == 6258){
        liz_print_str("A & D");
    }
    if(vendorID == 6272){
        liz_print_str("LOTES");
    }
    if(vendorID == 6283){
        liz_print_str("Faraday Tech");
    }
    if(vendorID == 6291){
        liz_print_str("Kyocera Corp");
    }
    if(vendorID == 6293){
        liz_print_str("Flextronics");
    }
    if(vendorID == 62965){
        liz_print_str("F5 Network");
    }
    if(vendorID == 6322){
        liz_print_str("K.K Rockey");
    }
    if(vendorID == 6324){
        liz_print_str("Yamaichi");
    }
    if(vendorID == 6353){
        liz_print_str("ULVAC PHI");
    }
    if(vendorID == 6356){
        liz_print_str("Celestica");
    }
    if(vendorID == 6359){
        liz_print_str("Sierra Wireless");
    }
    if(vendorID == 6372){
        liz_print_str("Acer");
    }
    if(vendorID == 6374){
        liz_print_str("MPL AG");
    }
    if(vendorID == 6383){
        liz_print_str("Avery Design");
    }
    if(vendorID == 6385){
        liz_print_str("Spectrum Intstrumentation");
    }
    if(vendorID == 6386){
        liz_print_str("I-PEX && Dai-ichi Seiko");
    }
    if(vendorID == 6388){
        liz_print_str("Napatech AS");
    }
    if(vendorID == 6392){
        liz_print_str("Amphenol");
    }
    if(vendorID == 6397){
        liz_print_str("Digital Media Professionals");
    }
    if(vendorID == 6398){
        liz_print_str("OPEX");
    }
    if(vendorID == 6414){
        liz_print_str("Fidus Systems");
    }
    if(vendorID == 6418){
        liz_print_str("Renesas Electronics");
    }
    if(vendorID == 6422){
        liz_print_str("Macnica");
    }
    if(vendorID == 6451){
        liz_print_str("Nexcom");
    }
    if(vendorID == 6461){
        liz_print_str("New H3C Tech");
    }
    if(vendorID == 6474){
        liz_print_str("DAP Holding");
    }
    if(vendorID == 6479){
        liz_print_str("Allion Labs");
    }
    if(vendorID == 6484){
        liz_print_str("One Stop Systems");
    }
    if(vendorID == 6496){
        liz_print_str("REj");
    }
    if(vendorID == 6498){
        liz_print_str("US Patent & TradeMark Office");
    }
    if(vendorID == 65007){
        liz_print_str("Ferionic Design");
    }
    if(vendorID == 65049){
        liz_print_str("TenaFe");
    }
    if(vendorID == 6516){
        liz_print_str("Eberspacher Electronics && STAR");
    }
    if(vendorID == 6525){
        liz_print_str("Cap Co");
    }
    if(vendorID == 6535){
        liz_print_str("Phison");
    }
    if(vendorID == 65505){
        liz_print_str("Suzhou Xiongli");
    }
    if(vendorID == 6566){
        liz_print_str("HDL Design");
    }
    if(vendorID == 6570){
        liz_print_str("Rambus");
    }
    if(vendorID == 6588){
        liz_print_str("Ueda Japan Radio");
    }
    if(vendorID == 6591){
        liz_print_str("Unicom");
    }
    if(vendorID == 6603){
        liz_print_str("Hartmann");
    }
    if(vendorID == 6612){
        liz_print_str("Quixant Plc");
    }
    if(vendorID == 6613){
        liz_print_str("Protech Systems");
    }
    if(vendorID == 6615){
        liz_print_str("Astek");
    }
    if(vendorID == 6626){
        liz_print_str("Vector Informatic");
    }
    if(vendorID == 6629){
        liz_print_str("Huawei");
    }
    if(vendorID == 6635){
        liz_print_str("DAIHEN");
    }
    if(vendorID == 6636){
        liz_print_str("ANSYS");
    }
    if(vendorID == 6638){
        liz_print_str("Netronome");
    }
    if(vendorID == 6656){
        liz_print_str("Universal Audio");
    }
    if(vendorID == 6659){
        liz_print_str("ASPEED");
    }
    if(vendorID == 6661){
        liz_print_str("Delta Electronics");
    }
    if(vendorID == 6663){
        liz_print_str("KVASER");
    }
    if(vendorID == 6669){
        liz_print_str("SPEAKER");
    }
    if(vendorID == 6670){
        liz_print_str("DEKTEK");
    }
    if(vendorID == 6673){
        liz_print_str("BitifEYE");
    }
    if(vendorID == 6674){
        liz_print_str("Taiwan Commate");
    }
    if(vendorID == 6677){
        liz_print_str("Axell");
    }
    if(vendorID == 6687){
        liz_print_str("AVAGO");
    }
    if(vendorID == 6693){
        liz_print_str("ERRICSON AS");
    }
    if(vendorID == 6697){
        liz_print_str("FORTINET");
    }
    if(vendorID == 6703){
        liz_print_str("Congatec");
    }
    if(vendorID == 6715){
        liz_print_str("AzureWave");
    }
    if(vendorID == 6717){
        liz_print_str("TriTek");
    }
    if(vendorID == 6719){
        liz_print_str("Kel");
    }
    if(vendorID == 6723){
        liz_print_str("Chuo");
    }
    if(vendorID == 6732){
        liz_print_str("Amulet");
    }
    if(vendorID == 6753){
        liz_print_str("ASTRON");
    }
    if(vendorID == 6766){
        liz_print_str("International Game");
    }
    if(vendorID == 6786){
        liz_print_str("Samtec");
    }
    if(vendorID == 6787){
        liz_print_str("ARKUS && Gopher");
    }
    if(vendorID == 6794){
        liz_print_str("Star Bridge");
    }
    if(vendorID == 6813){
        liz_print_str("QSC Audio");
    }
    if(vendorID == 6817){
        liz_print_str("Aristocrat Tech");
    }
    if(vendorID == 6818){
        liz_print_str("Media Links");
    }
    if(vendorID == 6825){
        liz_print_str("Schweitzer");
    }
    if(vendorID == 6828){
        liz_print_str("IBASE");
    }
    if(vendorID == 6833){
        liz_print_str("Sequans");
    }
    if(vendorID == 6840){
        liz_print_str("Parrallels");
    }
    if(vendorID == 6843){
        liz_print_str("Key ASIC BERHAD");
    }
    if(vendorID == 6849){
        liz_print_str("Global Unichip");
    }
    if(vendorID == 6850){
        liz_print_str("Avalue Tech");
    }
    if(vendorID == 6861){
        liz_print_str("Hensoldt && Airbus && Cassidan");
    }
    if(vendorID == 6880){
         liz_print_str("Google");
    }
    if(vendorID == 6888){
        liz_print_str("Basler");
    }
    if(vendorID == 6904){
        liz_print_str("Parade");
    }
    if(vendorID == 6912){
        liz_print_str("Montage");
    }
    if(vendorID == 6917){
        liz_print_str("Benchmark");
    }
    if(vendorID == 6919){
        liz_print_str("NEXTCHIP");
    }
    if(vendorID == 6920){
        liz_print_str("MSC Vertriebs");
    }
    if(vendorID == 6922){
        liz_print_str("Pegatron");
    }
    if(vendorID == 6924){
        liz_print_str("Northrop Grumman");
    }
    if(vendorID == 6930){
        liz_print_str("Analogix SemiConductor");
    }
    if(vendorID == 6935){
        liz_print_str("WinSystems");
    }
    if(vendorID == 6950){
        liz_print_str("INVEA TECH");
    }
    if(vendorID == 6954){
        liz_print_str("Keyence");
    }
    if(vendorID == 6958){
        liz_print_str("Riverbed");
    }
    if(vendorID == 6967){
        liz_print_str("TELEDYNE && SP");
    }
    if(vendorID == 6978){
        liz_print_str("Ceremorphic");
    }
    if(vendorID == 6981){
        liz_print_str("StarTech");
    }
    if(vendorID == 6985){
        liz_print_str("ALLDIS");
    }
    if(vendorID == 6988){
        liz_print_str("GALAXY");
    }
    if(vendorID == 6990){
        liz_print_str("Nations Tech");
    }
    if(vendorID == 6995){
        liz_print_str("ID");
    }
    if(vendorID == 7001){
        liz_print_str("Archronix");
    }
    if(vendorID == 7006){
        liz_print_str("Star Dundee");
    }
    if(vendorID == 7014){
        liz_print_str("Deltatec");
    }
    if(vendorID == 7019){
        liz_print_str("TELEDYNE DIGITAL IMAGING");
    }
    if(vendorID == 7023){
        liz_print_str("ETRON TECH");
    }
    if(vendorID == 7030){
        liz_print_str("AIC");
    }
    if(vendorID == 7035){
        liz_print_str("Multisuns");
    }
    if(vendorID == 7043){
        liz_print_str("Viasat");
    }
    if(vendorID == 7046){
        liz_print_str("Saab AB");
    }
    if(vendorID == 7055){
        liz_print_str("Nanoteq");
    }
    if(vendorID == 7061){
        liz_print_str("Green Hills");
    }
    if(vendorID == 7062){
        liz_print_str("Western Digital Tech");
    }
    if(vendorID == 7064){
        liz_print_str("EEPD");
    }
    if(vendorID == 7071){
        liz_print_str("BAE Systems");
    }
    if(vendorID == 7085){
        liz_print_str("Reflex CES");
    }
    if(vendorID == 7089){
        liz_print_str("Segate");
    }
    if(vendorID == 7090){
        liz_print_str("NIKON");
    }
    if(vendorID == 7098){
        liz_print_str("KLA");
    }
    if(vendorID == 7104){
        liz_print_str("InnoDisk");
    }
    if(vendorID == 7105){
        liz_print_str("EXFO");
    }
    if(vendorID == 7112){
        liz_print_str("Tokushu");
    }
    if(vendorID == 7113){
        liz_print_str("Sonifex");
    }
    if(vendorID == 7114){
        liz_print_str("Star Communication");
    }
    if(vendorID == 7117){
        liz_print_str("Apacer");
    }
    if(vendorID == 7118){
        liz_print_str("Silex");
    }
    if(vendorID == 7119){
        liz_print_str("NEC");
    }
    if(vendorID == 7120){
        liz_print_str("Astronics");
    }
    if(vendorID == 7124){
        liz_print_str("Inspur Electronics");
    }
    if(vendorID == 7125){
        liz_print_str("FreeBSD");
    }
    if(vendorID == 7127){
        liz_print_str("Granite River");
    }
    if(vendorID == 7129){
        liz_print_str("Open Text");
    }
    if(vendorID == 7132){
        liz_print_str("Intrado");
    }
    if(vendorID == 7133){
        liz_print_str("Atrust");
    }
    if(vendorID == 7135){
        liz_print_str("LUXSHARE");
    }
    if(vendorID == 7145){
        liz_print_str("MathWorks");
    }
    if(vendorID == 7147){
        liz_print_str("SignalCore");
    }
    if(vendorID == 7148){
        liz_print_str("SECO");
    }
    if(vendorID == 7150){
        liz_print_str("IXXAT");
    }
    if(vendorID == 7157){
        liz_print_str("Greenliant");
    }
    if(vendorID == 7162){
        liz_print_str("Daiichi Jitsugyo");
    }
    if(vendorID == 7163){
        liz_print_str("Analog Bits");
    }
    if(vendorID == 7164){
        liz_print_str("Duagon");
    }
    if(vendorID == 7172){
        liz_print_str("Dexon");
    }
    if(vendorID == 7173){
        liz_print_str("Blackberry");
    }
    if(vendorID == 7175){
        liz_print_str("HCL Tech");
    }
    if(vendorID == 7179){
        liz_print_str("Alazar");
    }
    if(vendorID == 7194){
        liz_print_str("UNH InterOperability");
    }
    if(vendorID == 7195){
        liz_print_str("Netlist");
    }
    if(vendorID == 7204){
        liz_print_str("Elma Bustronix");
    }
    if(vendorID == 7210){
        liz_print_str("AcroMag");
    }
    if(vendorID == 7214){
        liz_print_str("schnieder Eletric");
    }
    if(vendorID == 7215){
        liz_print_str("Daktronics");
    }
    if(vendorID == 7223){
        liz_print_str("Shikino");
    }
    if(vendorID == 7238){
        liz_print_str("Cosmotechs");
    }
    if(vendorID == 7247){
        liz_print_str("Bruker");
    }
    if(vendorID == 7248){
        liz_print_str("BizLink");
    }
    if(vendorID == 7253){
        liz_print_str("Hexagon Metrology");
    }
    if(vendorID == 7259){
        liz_print_str("XJTAG");
    }
    if(vendorID == 7262){
        liz_print_str("GopherTec");
    }
    if(vendorID == 7263){
        liz_print_str("Beijing Memblaze");
    }
    if(vendorID == 7268){
        liz_print_str("TRS RenTelco");
    }
    if(vendorID == 7269){
        liz_print_str("Jump Trading");
    }
    if(vendorID == 7271){
        liz_print_str("PreSonus Audio");
    }
    if(vendorID == 7273){
        liz_print_str("Comtel Electronics");
    }
    if(vendorID == 7276){
        liz_print_str("WibTek");
    }
    if(vendorID == 7279){
        liz_print_str("Bios corp");
    }
    if(vendorID == 7281){
        liz_print_str("Shimadzu");
    }
    if(vendorID == 7282){
        liz_print_str("ProDesign Electronics");
    }
    if(vendorID == 7285){
        liz_print_str("Bellwether");
    }
    if(vendorID == 7288){
        liz_print_str("Bechtel Marine");
    }
    if(vendorID == 7290){
        liz_print_str("Other World");
    }
    if(vendorID == 7294){
        liz_print_str("TTTECH");
    }
    if(vendorID == 7295){
        liz_print_str("Elektrobit");
    }
    if(vendorID == 7298){
        liz_print_str("HUBER + SUNHNER");
    }
    if(vendorID == 7308){
        liz_print_str("Mobiveil");
    }
    if(vendorID == 7318){
        liz_print_str("Carina Systems");
    }
    if(vendorID == 7325){
        liz_print_str("ILLUMINA");
    }
    if(vendorID == 7328){
        liz_print_str("MEMORIGHT");
    }
    if(vendorID == 7329){
        liz_print_str("Sync-n-Scale");
    }
    if(vendorID == 7339){
        liz_print_str("Lynx Software Tech");
    }
    if(vendorID == 7341){
        liz_print_str("EXTOLL");
    }
    if(vendorID == 7344){
        liz_print_str("Shannon Systems");
    }
    if(vendorID == 7348){
        liz_print_str("Serial Tek");
    }
    if(vendorID == 7349){
        liz_print_str("Focurite Audio");
    }
    if(vendorID == 7352){
        liz_print_str("Dawning Serial Tek");
    }
    if(vendorID == 7357){
        liz_print_str("Novachips");
    }
    if(vendorID == 7359){
        liz_print_str("RossVideo");
    }
    if(vendorID == 7361){
        liz_print_str("ADATA");
    }
    if(vendorID == 7362){
        liz_print_str("Unigen");
    }
    if(vendorID == 7363){
        liz_print_str("Sanmina");
    }
    if(vendorID == 7364){
        liz_print_str("Shenshen UnionMemory");
    }
    if(vendorID == 7374){
        liz_print_str("Wilder Tech");
    }
    if(vendorID == 7386){
        liz_print_str("ADTEC");
    }
    if(vendorID == 7389){
        liz_print_str("Secunet Security");
    }
    if(vendorID == 7391){
        liz_print_str("SmartDV");
    }
    if(vendorID == 7403){
        liz_print_str("Taiwan Pulse Motion");
    }
    if(vendorID == 7406){
        liz_print_str("Chant Sincere");
    }
    if(vendorID == 7410){
        liz_print_str("ZTE Corporation");
    }
    if(vendorID == 7414){
        liz_print_str("Aetina");
    }
    if(vendorID == 7415){
        liz_print_str("Subspace");
    }
    if(vendorID == 7418){
        liz_print_str("Corsair Memorry");
    }
    if(vendorID == 7419){
        liz_print_str("innotech");
    }
    if(vendorID == 7420){
        liz_print_str("Naltec");
    }
    if(vendorID == 7424){
        liz_print_str("Pure Storage");
    }
    if(vendorID == 7429){
        liz_print_str("TongFang HongKong");
    }
    if(vendorID == 7432){
        liz_print_str("Shen Zhen Deren");
    }
    if(vendorID == 7439){
        liz_print_str("Amazon");
    }
    if(vendorID == 7442){
        liz_print_str("JESS LINK");
    }
    if(vendorID == 7443){
        liz_print_str("Prodigy Tech");
    }
    if(vendorID == 7444){
        liz_print_str("Lintes Tech");
    }
    if(vendorID == 7447){
        liz_print_str("Shangai Zhaoxin");
    }
    if(vendorID == 7448){
        liz_print_str("RME");
    }
    if(vendorID == 7449){
        liz_print_str("VAIO");
    }
    if(vendorID == 7453){
        liz_print_str("CNEX LABS");
    }
    if(vendorID == 7454){
        liz_print_str("Solid State");
    }
    if(vendorID == 7462){
        liz_print_str("KalRay");
    }
    if(vendorID == 7463){
        liz_print_str("M31 Tech");
    }
    if(vendorID == 7464){
        liz_print_str("Aava Mobile");
    }
    if(vendorID == 7465){
        liz_print_str("Hagiwara Solutions");
    }
    if(vendorID == 7466){
        liz_print_str("KAYA");
    }
    if(vendorID == 7469){
        liz_print_str("GOOD WAY TECH");
    }







//PAGE 7

}
