#pragma once
#include "alpha_variables.h"
#include "string.h"

uint64_t inl(uint64_t port);
void outl(uint64_t port, uint32_t val);
uint32_t farpeekl(uint16_t sel, void* off);
void farpokeb(uint16_t sel, void* off, uint8_t v);
void outb(uint16_t port, uint8_t val);

uint8_t inb(uint16_t port);
void io_wait(void);

uint8_t are_interrupts_enabled();
unsigned long save_irqdisable(void);
void irqrestore(unsigned long flags);
void intended_usage(void);
void lidt(void* base, uint16_t size);

uint64_t rdtsc(void);
unsigned long read_cr0(void);
void invlpg(void* m);
void wrmsr(uint64_t msr, uint64_t value);
uint64_t rdmsr(uint64_t msr);
void write_reg( size_t addr, uint32_t val );
uint32_t ReadRegister( size_t addr );
void detect_cores(uint8_t *rsdt);
