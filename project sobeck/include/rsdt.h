#pragma once
#include "alpha_variables.h"
#include "io.h"

typedef struct{
  char Signature[4];
  uint32_t Length;
  uint8_t Revision;
  uint8_t Checksum;
  char OEMID[6];
  char OEMTableID[8];
  uint32_t OEMRevision;
  uint32_t CreatorID;
  uint32_t CreatorRevision;
}ACPISDTHeader;

typedef struct {
    ACPISDTHeader h; 
    uint64_t PointerToOtherSDT[];
}RSDT;


struct XSDT{
  ACPISDTHeader h;
  uint64_t PointerToOtherSDT[];
}XSDT;

uint8_t doChecksum(ACPISDTHeader *tableHeader);
void *findFACP(void *RootSDT);
