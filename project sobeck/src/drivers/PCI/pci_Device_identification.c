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


//PAGE 4

}
