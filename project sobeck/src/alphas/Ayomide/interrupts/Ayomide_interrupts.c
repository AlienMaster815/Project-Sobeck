#include "alpha_variables.h"
#include "interrupts.h"
#include "idt.h"
#include "io.h"
#include "gdt.h"

extern void* isr_stub_table[];
uint8_t vectors[32];

void idt_init() {

    idtr.base = (uintptr_t)&idt[0];
    idtr.limit = (uint16_t)sizeof(idt_entry_t) * 255 - 1;

    for (uint8_t vector = 0; vector < 32; vector++) {
        idt_set_descriptor(vector, isr_stub_table[vector], 0x8E);
        vectors[vector] = true;
    }

    __asm__ volatile ("lidt %0" : : "m"(idtr)); // load the new IDT
    __asm__ volatile ("sti"); // set the interrupt flag
}

void idt_set_descriptor(uint8_t vector, void* isr, uint8_t flags) {
    idt_entry_t* descriptor = &idt[vector];

    descriptor->base_low       = (uint64_t)isr & 0xFFFF;
    descriptor->cs             = kernel_code;
    descriptor->ist            = 0;
    descriptor->attributes     = flags;
    descriptor->base_mid       = ((uint64_t)isr >> 16) & 0xFFFF;
    descriptor->base_high      = ((uint64_t)isr >> 32) & 0xFFFFFFFF;
    descriptor->rsv0           = 0;
}

uint8_t set_up_interrupts(){

   idt_init();
   NMI_enable();
    return 0;
}


void exceptions_handler(){

    __asm__ volatile ("cli; hlt");
}


 void NMI_enable() {
    outb(0x70, inb(0x70) & 0x7F);
    inb(0x71);
 }

 void NMI_disable() {
    outb(0x70, inb(0x70) | 0x80);
    inb(0x71);
 }
