#pragma once
#include <stddef.h>
#include <stdint.h>

uint8_t check_apic();
void cpu_set_apic_base(uintptr_t apic);
uintptr_t cpu_get_apic_base();
void enable_apic();
uint8_t set_up_interrupts();
void interrupt_panic(uint8_t error_code);

