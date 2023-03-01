#pragma once
#include "liz_print.h"
#include "alpha_variables.h"
#include "string.h"
typedef struct  __attribute__((packed)){
	uint16_t    base_low;      // The lower 16 bits of the ISR's address
	uint16_t    cs;    // The GDT segment selector that the CPU will load into CS before calling the ISR
	uint8_t	    ist;          // The IST in the TSS that the CPU will load into RSP; set to zero for now
	uint8_t     attributes;   // Type and attributes; see the IDT page
	uint16_t    base_mid;      // The higher 16 bits of the lower 32 bits of the ISR's address
	uint32_t    base_high;     // The higher 32 bits of the ISR's address
	uint32_t    rsv0;     // Set to zero
} idt_entry_t;

__attribute__((aligned(0x10))) 
static idt_entry_t idt[256]; 

typedef struct __attribute__((packed)) {
	uint16_t	limit;
	uint32_t	base;
}idtr_t;

static idtr_t idtr;

void idt_init();
void idt_set_descriptor(uint8_t vector, void* isr, uint8_t flags);
uint8_t set_up_interrupts();
void exceptions_handler();
 void NMI_enable();

 void NMI_disable();
