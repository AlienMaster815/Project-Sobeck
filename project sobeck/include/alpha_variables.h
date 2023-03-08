#pragma once
#include <stddef.h>
#include <stdint.h>
#include "gdt.h"

typedef struct __attribute__((packed)){
    uint8_t slot;
    uint8_t device;
    uint8_t function;
    uint8_t DriverType;
}SATA_DRIVE_KERNEL;

enum{
    true =1,
    false = 0,
};

enum{
    all = 0,
    samina = 1,
    ayomide = 2,
};


void awake_alphas(uint8_t alpha);
uint8_t samina_awake();
uint8_t ayomide_awake();
 
void panic_waking_alpha();

