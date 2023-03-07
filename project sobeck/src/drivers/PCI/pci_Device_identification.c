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
    if(vendorID == 7474){
        liz_print_str("Genesis");
    }
    if(vendorID == 7475){
        liz_print_str("Prodrive");
    }
    if(vendorID == 7478){
        liz_print_str("Airbus Defense and Space");
    }
    if(vendorID == 7480){
        liz_print_str("Colorado Engineering");
    }
    if(vendorID == 7481){
        liz_print_str("Baikal JSC");
    }
    if(vendorID == 7493){
        liz_print_str("Top Victory");
    }
    if(vendorID == 7495){
        liz_print_str("Ciena");
    }
    if(vendorID == 7499){
        liz_print_str("Elektrofera");
    }
    if(vendorID == 7500){
        liz_print_str("Diamanti && Datawise");
    }
    if(vendorID == 7501){
        liz_print_str("Integrated Design");
    }
    if(vendorID == 7504){
        liz_print_str("Aurotek");
    }
    if(vendorID == 7512){
        liz_print_str("ATECH FLASH");
    }
    if(vendorID == 7521){
        liz_print_str("Technobox");
    }
    if(vendorID == 7524){
        liz_print_str("Quarch");
    }
    if(vendorID == 7527){
        liz_print_str("Alltop");
    }
    if(vendorID == 7531){
        liz_print_str("ZAO Kraftway");
    }
    if(vendorID == 7537){
        liz_print_str("Laird Connectivity");
    }
    if(vendorID == 7538){
        liz_print_str("Xiaomi Communications");
    }
    if(vendorID == 7544){
        liz_print_str("Dera");
    }
    if(vendorID == 7545){
        liz_print_str("Transcend");
    }
    if(vendorID == 7548){
        liz_print_str("AeroTech");
    }
    if(vendorID == 7549){
        liz_print_str("Viavi");
    }
    if(vendorID == 7551){
        liz_print_str("Plugable");
    }
    if(vendorID == 7554){
        liz_print_str("NETINT");
    }
    if(vendorID == 7555){
        liz_print_str("Uniconn");
    }
    if(vendorID == 7556){
        liz_print_str("b-plus");
    }
    if(vendorID == 7557){
        liz_print_str("Neosem Holdings");
    }
    if(vendorID == 7558){
        liz_print_str("EVERTZ");
    }
    if(vendorID == 7559){
        liz_print_str("Rockchip");
    }
    if(vendorID == 7560){
        liz_print_str("Telechips");
    }
    if(vendorID == 7561){
        liz_print_str("YEESTOR");
    }
    if(vendorID == 7564){
        liz_print_str("FASTWEL");
    }
    if(vendorID == 7565){
        liz_print_str("Fiberhome");
    }
    if(vendorID == 7566){
        liz_print_str("MACOM");
    }
    if(vendorID == 7567){
        liz_print_str("ENYX");
    }
    if(vendorID == 7570){
        liz_print_str("ABACO");
    }
    if(vendorID == 7571){
        liz_print_str("YADRO");
    }
    if(vendorID == 7572){
        liz_print_str("Chengdu Higon");
    }
    if(vendorID == 7573){
        liz_print_str("GraphCore");
    }
    if(vendorID == 7575){
        liz_print_str("Shenzhen Longsys");
    }
    if(vendorID == 7579){
        liz_print_str("Facebook");
    }
    if(vendorID == 7584){
        liz_print_str("3M Company");
    }
    if(vendorID == 7585){
        liz_print_str("TEKO TELECOM");
    }
    if(vendorID == 7586){
        liz_print_str("Sapphire");
    }
    if(vendorID == 7589){
        liz_print_str("UTran");
    }
    if(vendorID == 7592){
        liz_print_str("Corigine");
    }
    if(vendorID == 7596){
        liz_print_str("SparkLAN");
    }
    if(vendorID == 7598){
        liz_print_str("Vectology");
    }
    if(vendorID == 7599){
        liz_print_str("MIT Lincoln Lab");
    }
    if(vendorID == 7602){
        liz_print_str("STP Electronics");
    }
    if(vendorID == 7603){
        liz_print_str("UNISOC");
    }
    if(vendorID == 7604){
        liz_print_str("Arteris");
    }
    if(vendorID == 7613){
        liz_print_str("Logic Fruit");
    }
    if(vendorID == 7614){
        liz_print_str("INNOGRIT");
    }
    if(vendorID == 7618){
        liz_print_str("Alco Digital");
    }
    if(vendorID == 7621){
        liz_print_str("FADU");
    }
    if(vendorID == 7622){
        liz_print_str("FOX Crypto");
    }
    if(vendorID == 7623){
        liz_print_str("SSI");
    }
    if(vendorID == 7625){
        liz_print_str("UniTest");
    }
    if(vendorID == 7626){
        liz_print_str("MARVELL");
    }
    if(vendorID == 7629){
        liz_print_str("LIQID");
    }
    if(vendorID == 7631){
        liz_print_str("Beijing Sinead");
    }
    if(vendorID == 7632){
        liz_print_str("MCDOWELL");
    }
    if(vendorID == 7633){
        liz_print_str("Truechip");
    }
    if(vendorID == 7635){
        liz_print_str("Sage");
    }
    if(vendorID == 7636){
        liz_print_str("SwissBit");
    }
    if(vendorID == 7638){
        liz_print_str("ECRIN");
    }
    if(vendorID == 7639){
        liz_print_str("AVAL DATA");
    }
    if(vendorID == 7640){
        liz_print_str("Pensando");
    }
    if(vendorID == 7643){
        liz_print_str("Parraid");
    }
    if(vendorID == 7644){
        liz_print_str("Carlisle");
    }
    if(vendorID == 7646){
        liz_print_str("Valens");
    }
    if(vendorID == 7648){
        liz_print_str("Groq");
    }
    if(vendorID == 7650){
        liz_print_str("Action Star");
    }
    if(vendorID == 7653){
        liz_print_str("Eietic Communications");
    }
    if(vendorID == 7656){
        liz_print_str("Acqiris");
    }
    if(vendorID == 7661){
        liz_print_str("Alibaba");
    }
    if(vendorID == 7662){
        liz_print_str("Biwin Storage");
    }
    if(vendorID == 7663){
        liz_print_str("Ampere");
    }
    if(vendorID == 7667){
        liz_print_str("Ethernity");
    }
    if(vendorID == 7669){
        liz_print_str("ShenZhen");
    }
    if(vendorID == 7671){
        liz_print_str("OpenCPI");
    }
    if(vendorID == 7672){
        liz_print_str("V & G");
    }
    if(vendorID == 7673){
        liz_print_str("Simula");
    }
    if(vendorID == 7674){
        liz_print_str("Astera Labs");
    }
    if(vendorID == 7677){
        liz_print_str("CDSG");
    }
    if(vendorID == 7682){
        liz_print_str("NSITEXE");
    }
    if(vendorID == 7683){
        liz_print_str("OnLogic");
    }
    if(vendorID == 7689){
        liz_print_str("Novatk");
    }
    if(vendorID == 7690){
        liz_print_str("Esperanto");
    }
    if(vendorID == 7691){
        liz_print_str("Shenzhen zhenta");
    }
    if(vendorID == 7692){
        liz_print_str("Axiomtek");
    }
    if(vendorID == 7693){
        liz_print_str("SambaNova");
    }
    if(vendorID == 7695){
        liz_print_str("Kioxia");
    }
    if(vendorID == 7696){
        liz_print_str("eSOL");
    }
    if(vendorID == 7698){
        liz_print_str("Introspect");
    }
    if(vendorID == 7700){
        liz_print_str("Silicon Creation");
    }
    if(vendorID == 7701){
        liz_print_str("Wieson");
    }
    if(vendorID == 7702){
        liz_print_str("BOXX");
    }
    if(vendorID == 7703){
        liz_print_str("Arnold && Ritcher");
    }
    if(vendorID == 7704){
        liz_print_str("Beijing GuangRunTong");
    }
    if(vendorID == 7706){
        liz_print_str("DataDirect");
    }
    if(vendorID == 7707){
        liz_print_str("Firm INFORMTEST");
    }
    if(vendorID == 7715){
        liz_print_str("Credo");
    }
    if(vendorID == 7719){
        liz_print_str("Shanghai Denglin");
    }
    if(vendorID == 7726){
        liz_print_str("Mercedes Benz");
    }
    if(vendorID == 7730){
        liz_print_str("Tuxera");
    }
    if(vendorID == 7731){
        liz_print_str("Delkin");
    }
    if(vendorID == 7732){
        liz_print_str("qrypt");
    }
    if(vendorID == 7734){
        liz_print_str("Shanhai Enflame Technologies");
    }
    if(vendorID == 7736){
        liz_print_str("Blaize");
    }
    if(vendorID == 7737){
        liz_print_str("Medion");
    }
    if(vendorID == 7738){
        liz_print_str("Cactus");
    }
    if(vendorID == 7739){
        liz_print_str("DapuStor");
    }
    if(vendorID == 7741){
        liz_print_str("Burlywood");
    }
    if(vendorID == 7742){
        liz_print_str("Shanghai Iluvatar");
    }
    if(vendorID == 7743){
        liz_print_str("Linaro");
    }
    if(vendorID == 7746){
        liz_print_str("ART Beijing");
    }
    if(vendorID == 7747){
        liz_print_str("MaxLinear");
    }
    if(vendorID == 7748){
        liz_print_str("Valve");
    }
    if(vendorID == 7749){
        liz_print_str("ESSENCORE");
    }
    if(vendorID == 7750){
        liz_print_str("Varjo Tech");
    }
    if(vendorID == 7751){
        liz_print_str("SZ Dji Technology");
    }
    if(vendorID == 7753){
        liz_print_str("Yangtze Memorry");
    }
    if(vendorID == 7754){
        liz_print_str("2CRSI");
    }
    if(vendorID == 7755){
        liz_print_str("Maxio");
    }
    if(vendorID == 7756){
        liz_print_str("GSI");
    }
    if(vendorID == 7760){
        liz_print_str("IP3");
    }
    if(vendorID == 7762){
        liz_print_str("Tenstorrent");
    }
    if(vendorID == 7768){
        liz_print_str("Kinara");
    }
    if(vendorID == 7769){
        liz_print_str("Oxford Nanopore");
    }
    if(vendorID == 7772){
        liz_print_str("Alphawave");
    }
    if(vendorID == 7773){
        liz_print_str("ASR");
    }
    if(vendorID == 7774){
        liz_print_str("Emergent Vision");
    }
    if(vendorID == 7776){
        liz_print_str("HAILO");
    }
    if(vendorID == 7779){
        liz_print_str("Shenzhen iNET");
    }
    if(vendorID == 7783){
        liz_print_str("Untether AI");
    }
    if(vendorID == 7784){
        liz_print_str("Jiangsu Zinsheng");
    }
    if(vendorID == 7786){
        liz_print_str("IRISO");
    }
    if(vendorID == 7787){
        liz_print_str("Axiado");
    }
    if(vendorID == 7788){
        liz_print_str("Xsight Labs");
    }
    if(vendorID == 7791){
        liz_print_str("Kandou");
    }
    if(vendorID == 7794){
        liz_print_str("ZOOX");
    }
    if(vendorID == 7795){
        liz_print_str("NeuroBlade");
    }
    if(vendorID == 7797){
        liz_print_str("Wind River");
    }
    if(vendorID == 7798){
        liz_print_str("Zhejiang zhaolong");
    }
    if(vendorID == 7800){
        liz_print_str("Beijing SenseTime");
    }
    if(vendorID == 7804){
        liz_print_str("Brainchip");
    }
    if(vendorID == 7805){
        liz_print_str("Daichu Tech");
    }
    if(vendorID == 7806){
        liz_print_str("PLIOPS");
    }
    if(vendorID == 7807){
        liz_print_str("Jiangsu");
    }
    if(vendorID == 7809){
        liz_print_str("Ramaxel");
    }
    if(vendorID == 7810){
        liz_print_str("Dongguan Yizhao");
    }
    if(vendorID == 7813){
        liz_print_str("Heitec AG");
    }
    if(vendorID == 7814){
        liz_print_str("Wintec");
    }
    if(vendorID == 7815){
        liz_print_str("Shenzhen Shinning");
    }
    if(vendorID == 7826){
        liz_print_str("Raymax");
    }
    if(vendorID == 7827){
        liz_print_str("Douyin");
    }
    if(vendorID == 7830){
        liz_print_str("Drut Technologies");
    }
    if(vendorID == 7831){
        liz_print_str("Caswell");
    }
    if(vendorID == 7833){
        liz_print_str("Integrated SERVICE");
    }
    if(vendorID == 7834){
        liz_print_str("Neoconix");
    }
    if(vendorID == 7836){
        liz_print_str("Adnacom");
    }
    if(vendorID == 7837){
        liz_print_str("VersaLogic");
    }
    if(vendorID == 7839){
        liz_print_str("Lynxi");
    }
    if(vendorID == 7840){
        liz_print_str("Tencent");
    }
    if(vendorID == 7841){
        liz_print_str("Sichuan Huafeng");
    }
    if(vendorID == 7842){
        liz_print_str("Cyber Cogs");
    }
    if(vendorID == 7843){
        liz_print_str("Expedera");
    }
    if(vendorID == 7844){
        liz_print_str("Newtech");
    }
    if(vendorID == 7845){
        liz_print_str("Chief Land");
    }
    if(vendorID == 7847){
        liz_print_str("IntelliProp");
    }
    if(vendorID == 7848){
        liz_print_str("Winintec");
    }
    if(vendorID == 7850){
        liz_print_str("NTP Tech");
    }
    if(vendorID == 7851){
        liz_print_str("Hefei DATANG");
    }
    if(vendorID == 7852){
        liz_print_str("Quectel wireless");
    }
    if(vendorID == 7854){
        liz_print_str("XFX");
    }
    if(vendorID == 7855){
        liz_print_str("Palo Alto");
    }
    if(vendorID == 7856){
        liz_print_str("Shenshen Eletrical");
    }
    if(vendorID == 7859){
        liz_print_str("Shenzhen Goodtimes");
    }
    if(vendorID == 7862){
        liz_print_str("Wuxi Stars");
    }
    if(vendorID == 7865){
        liz_print_str("Senscomm");
    }
    if(vendorID == 7867){
        liz_print_str("nCipher");
    }
    if(vendorID == 7868){
        liz_print_str("Sabrent");
    }
    if(vendorID == 7869){
        liz_print_str("Emergetch");
    }
    if(vendorID == 7873){
        liz_print_str("Wiwynn");
    }
    if(vendorID == 7874){
        liz_print_str("eTopus");
    }
    if(vendorID == 7876){
        liz_print_str("Picocom");
    }
    if(vendorID == 7878){
        liz_print_str("Vastai");
    }
    if(vendorID == 7880){
        liz_print_str("Innosilicon");
    }
    if(vendorID == 7881){
        liz_print_str("Wingtech");
    }
    if(vendorID == 7882){
        liz_print_str("Lightmatter");
    }
    if(vendorID == 7886){
        liz_print_str("EdgeQ");
    }
    if(vendorID == 7890){
        liz_print_str("FuriosaAI");
    }
    if(vendorID == 7891){
        liz_print_str("Shenzhen Yingjiaxun");
    }
    if(vendorID == 7892){
        liz_print_str("shandong Exponent SemiConductor");
    }
    if(vendorID == 7893){
        liz_print_str("Moore Threads");
    }
    if(vendorID == 7895){
        liz_print_str("TARGETEK");
    }
    if(vendorID == 7896){
        liz_print_str("Digiteq Automotive");
    }
    if(vendorID == 7897){
        liz_print_str("Myrtle AI");
    }
    if(vendorID == 7898){
        liz_print_str("Infodas");
    }
    if(vendorID == 7902){
        liz_print_str("DreamBig");
    }
    if(vendorID == 7904){
        liz_print_str("Shanghai Biren");
    }
    if(vendorID == 7905){
        liz_print_str("Suzhou Kuhan INFORMATION");
    }
    if(vendorID == 7906){
        liz_print_str("plc2 Design");
    }
    if(vendorID == 7908){
        liz_print_str("");
    }
    if(vendorID == 7910){
        liz_print_str("Clientron");
    }
    if(vendorID == 7911){
        liz_print_str("Honor Device");
    }
    if(vendorID == 7913){
        liz_print_str("SUSE LLC");
    }
    if(vendorID == 7915){
        liz_print_str("KAIMAI");
    }
    if(vendorID == 7916){
        liz_print_str("Jiangsu");
    }
    if(vendorID == 7917){
        liz_print_str("Xiangdixian");
    }
    if(vendorID == 7918){
        liz_print_str("Tracewell");
    }
    if(vendorID == 7920){
        liz_print_str("Ayar Labs");
    }
    if(vendorID == 7921){
        liz_print_str("Black Sesame");
    }
    if(vendorID == 7922){
        liz_print_str("Smart IOPS");
    }
    if(vendorID == 7924){
        liz_print_str("China Aviation");
    }
    if(vendorID == 7925){
        liz_print_str("Winmate");
    }
    if(vendorID == 7926){
        liz_print_str("GrAI Matter Labs");
    }
    if(vendorID == 7927){
        liz_print_str("Shenzhen Gunnir");
    }
    if(vendorID == 7928){
        liz_print_str("APTIV");
    }
    if(vendorID == 7929){
        liz_print_str("Zeku");
    }
    if(vendorID == 7930){
        liz_print_str("Pacific Light");
    }
    if(vendorID == 7931){
        liz_print_str("Flexxon PTE");
    }
    if(vendorID == 7933){
        liz_print_str("Rivos");
    }
    if(vendorID == 7934){
        liz_print_str("Peng Yu Trigold");
    }
    if(vendorID == 7935){
        liz_print_str("Rebellions");
    }
    if(vendorID == 7936){
        liz_print_str("Enercon");
    }
    if(vendorID == 7938){
        liz_print_str("Beijing Dayu");
    }
    if(vendorID == 7939){
        liz_print_str("Shenzhen Shichuangyi");
    }
    if(vendorID == 7940){
        liz_print_str("iPasslabs");
    }
    if(vendorID == 7941){
        liz_print_str("WLCO");
    }
    if(vendorID == 7942){
        liz_print_str("SiMa AI");
    }
    if(vendorID == 7943){
        liz_print_str("Mitsui Chemicals America");
    }
    if(vendorID == 7944){
        liz_print_str("Akrostar");
    }
    if(vendorID == 7946){
        liz_print_str("Motorcomm");
    }
    if(vendorID == 7949){
        liz_print_str("DeGirum");
    }
    if(vendorID == 7950){
        liz_print_str("Accipiter");
    }
    if(vendorID == 7951){
        liz_print_str("Nebula Matrix");
    }
    if(vendorID == 7955){
        liz_print_str("Listan");
    }
    if(vendorID == 7957){
        liz_print_str("Wolley");
    }
    if(vendorID == 7958){
        liz_print_str("Xconn Tech");
    }
    if(vendorID == 7959){
        liz_print_str("Zettastone");
    }
    if(vendorID == 7960){
        liz_print_str("C-Payne PCB Design");
    }
    if(vendorID == 7961){
        liz_print_str("Wuxi High Information");
    }
    if(vendorID == 7965){
        liz_print_str("Initio HK");
    }
    if(vendorID == 7966){
        liz_print_str("CARIAD");
    }
    if(vendorID == 7968){
        liz_print_str("Channel Well");
    }
    if(vendorID == 7972){
        liz_print_str("xFusion");
    }
    if(vendorID == 7974){
        liz_print_str("SEMIFIVE");
    }
    if(vendorID == 7976){
        liz_print_str("HisunTest Technologies");
    }
    if(vendorID == 7981){
        liz_print_str("Elastics Cloud");
    }
    if(vendorID == 7984){
        liz_print_str("Edelweiss");
    }
    if(vendorID == 7985){
        liz_print_str("Nextorage");
    }
    if(vendorID == 7986){
        liz_print_str("Wuhan YuXin");
    }
    if(vendorID == 7987){
        liz_print_str("Purplelec");
    }
    if(vendorID == 7988){
        liz_print_str("Aviva Links");
    }
    if(vendorID == 7989){
        liz_print_str("Amlogic");
    }
    if(vendorID == 7990){
        liz_print_str("Moffett AI");
    }
    if(vendorID == 7991){
        liz_print_str("HongKong Likfo");
    }
    if(vendorID == 7992){
        liz_print_str("Wisewave");
    }
    if(vendorID == 7993){
        liz_print_str("Silicon Innovation");
    }
    if(vendorID == 7994){
        liz_print_str("Powerleader");
    }
    if(vendorID == 7995){
        liz_print_str("shunyao");
    }
    if(vendorID == 7996){
        liz_print_str("Avant Tech");
    }
    if(vendorID == 7997){
        liz_print_str("nLight");
    }
    if(vendorID == 7999){
        liz_print_str("Shenzhen 3SNIC");
    }
    if(vendorID == 8000){
        liz_print_str("Netac");
    }
    if(vendorID == 8001){
        liz_print_str("AIO CORE");
    }
    if(vendorID == 8002){
        liz_print_str("EKG Electronics");
    }
    if(vendorID == 8003){
        liz_print_str("Ethernovia");
    }
    if(vendorID == 8004){
        liz_print_str("VVDN");
    }
    if(vendorID == 8005){
        liz_print_str("Signal Easy");
    }
    if(vendorID == 8006){
        liz_print_str("Shenzhen Chrent");
    }
    if(vendorID == 8007){
        liz_print_str("YUSUR");
    }
    if(vendorID == 8008){
        liz_print_str("WISTRON NeWeb");
    }
    if(vendorID == 8009){
        liz_print_str("NeuReality");
    }
    if(vendorID == 8010){
        liz_print_str("Shenshen Corerain");
    }
    if(vendorID == 8011){
        liz_print_str("Axera SemiConductors");
    }
    if(vendorID == 8012){
        liz_print_str("Shenzhen Meigao");
    }
    if(vendorID == 8013){
        liz_print_str("NIO Auto");
    }
    if(vendorID == 8014){
        liz_print_str("ShenZhen Konkr");
    }
    if(vendorID == 8015){
        liz_print_str("Shanghai DaoCloud");
    }
    if(vendorID == 8016){
        liz_print_str("LeRain");
    }
    if(vendorID == 8017){
        liz_print_str("Cloud Nine");
    }
    if(vendorID == 8018){
        liz_print_str("Mango Boost");
    }
    if(vendorID == 8019){
        liz_print_str("Shenzhen Jaguar");
    }
    if(vendorID == 8020){
        liz_print_str("Teledyne FLIR");
    }
    if(vendorID == 8021){
        liz_print_str("Shenzhen MADIGI");
    }
    if(vendorID == 8022){
        liz_print_str("Sapeon");
    }
    if(vendorID == 8023){
        liz_print_str("Teletrx");
    }
    if(vendorID == 8024){
        liz_print_str("Wild River");
    }
    if(vendorID == 8025){
        liz_print_str("Lucid Visions");
    }
    if(vendorID == 8027){
        liz_print_str("Roscoe Software");
    }
    if(vendorID == 8028){
        liz_print_str("TECNO MOBILE");
    }
    if(vendorID == 8029){
        liz_print_str("SHANGHAI UniVista");
    }
    if(vendorID == 8030){
        liz_print_str("Optos");
    }
    if(vendorID == 8031){
        liz_print_str("DENKEI TRADING");
    }
    if(vendorID == 8032){
        liz_print_str("ACCELECOM");
    }
    if(vendorID == 8033){
        liz_print_str("TuSimple");
    }
    if(vendorID == 8034){
        liz_print_str("Rosenberg Hochfrequenztechnik");
    }
    if(vendorID == 8035){
        liz_print_str("Tessolve");
    }
    if(vendorID == 8037){
        liz_print_str("Wuhan Lixi");
    }
    if(vendorID == 8038){
        liz_print_str("Shenzhen Huahong");
    }
    if(vendorID == 8039){
        liz_print_str("Shanghai Yunsilicon");
    }
    if(vendorID == 8041){
        liz_print_str("Shenzhen Haocheng");
    }
    if(vendorID == 8042){
        liz_print_str("Ford Motor");
    }
    if(vendorID == 8043){
        liz_print_str("Nanjing Houmo");
    }
    if(vendorID == 8044){
        liz_print_str("CIX Tech");
    }
    if(vendorID == 8045){
        liz_print_str("Allwinner");
    }
    if(vendorID == 8046){
        liz_print_str("Technolution");
    }
    if(vendorID == 8047){
        liz_print_str("hudaxia");
    }
    if(vendorID == 8048){
        liz_print_str("Qualitas");
    }
    if(vendorID == 8050){
        liz_print_str("Jane Street");
    }
    if(vendorID == 8051){
        liz_print_str("Shenzhen Quanxing");
    }
    if(vendorID == 8052){
        liz_print_str("Leica");
    }
    if(vendorID == 8053){
        liz_print_str("Shenzhen");
    }
    if(vendorID == 8054){
        liz_print_str("SiEngine");
    }
    if(vendorID == 8055){
        liz_print_str("Vast Data");
    }
    if(vendorID == 8056){
        liz_print_str("Suvaca");
    }
    if(vendorID == 8057){
        liz_print_str("Fraunhofer");
    }
    if(vendorID == 8058){
        liz_print_str("Efinix");
    }
    if(vendorID == 8059){
        liz_print_str("CELESTIAL");
    }
    if(vendorID == 8060){
        liz_print_str("HongKong Applied Science");
    }
    if(vendorID == 8061){
        liz_print_str("Qbit Semiconductor");
    }
    if(vendorID == 8062){
        liz_print_str("Wilk");
    }
    if(vendorID == 8063){
        liz_print_str("XEPIC");
    }
    if(vendorID == 8064){
        liz_print_str("SHENZHEN Tong TAI YI");
    }
    if(vendorID == 8065){
        liz_print_str("CONNPRO");
    }
    if(vendorID == 8066){
        liz_print_str("d-Matrix");
    }
    if(vendorID == 8067){
        liz_print_str("Hangzhou Clounix");
    }
    if(vendorID == 8068){
        liz_print_str("45Drives");
    }
    if(vendorID == 8070){
        liz_print_str("NEXTY Electronics");
    }
    if(vendorID == 8071){
        liz_print_str("SiTime");
    }
    if(vendorID == 8072){
        liz_print_str("GL Communications");
    }
    if(vendorID == 8073){
        liz_print_str("Shenzhen Gooxi");
    }
    if(vendorID == 8074){
        liz_print_str("J-Squared");
    }
    if(vendorID == 8075){
        liz_print_str("Carl Zeiss meditec");
    }
    if(vendorID == 8076){
        liz_print_str("Exascend");
    }
    if(vendorID == 8077){
        liz_print_str("Graviton");
    }
    if(vendorID == 8078){
        liz_print_str("Eliyan");
    }
    if(vendorID == 8079){
        liz_print_str("Signature IP");
    }
    if(vendorID == 8080){
        liz_print_str("Qside Technologies");
    }
    if(vendorID == 8081){
        liz_print_str("Rapid Silicon");
    }
    if(vendorID == 8082){
        liz_print_str("PROXMEM HK");
    }
    if(vendorID == 8083){
        liz_print_str("Mega Eletronix");
    }
    if(vendorID == 8084){
        liz_print_str("Chipsea");
    }
    if(vendorID == 8086){
        liz_print_str("HANA Electronics");
    }
    if(vendorID == 8087){
        liz_print_str("Ventana");
    }
    if(vendorID == 8088){
        liz_print_str("AKEANA");
    }
    if(vendorID == 8089){
        liz_print_str("Shenzhen Techwinsemi");
    }
    if(vendorID == 8106){
        liz_print_str("Hexaflake");
    }
    if(vendorID == 8107){
        liz_print_str("UniFabriX");
    }
    if(vendorID == 8139){
        liz_print_str("Varex Imagaging");
    }
    if(vendorID == 8141){
        liz_print_str("Hitchi high Tech");
    }
    if(vendorID == 8148){
        liz_print_str("Sunix");
    }
    if(vendorID == 8153){
        liz_print_str("NeuChips");
    }
    if(vendorID == 8225){
        liz_print_str("Intelligent Memmory");
    }
    if(vendorID == 8628){
        liz_print_str("HunanGoke");
    }
    if(vendorID == 8866){
        liz_print_str("Rigol");
    }
    if(vendorID == 8898){
        liz_print_str("Gowin");
    }
    if(vendorID == 8923){
        liz_print_str("Missing Link");
    }
    if(vendorID == 9015){
        liz_print_str("Macronix");
    }
    if(vendorID == 8186){
        liz_print_str("stream Computing");
    }
    if(vendorID == 9798){
        liz_print_str("Kingston Tech");
    }
    if(vendorID == 33006){
        liz_print_str("virtualBox");
    }


//PAGE 9

}
