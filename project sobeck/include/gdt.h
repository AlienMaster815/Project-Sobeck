#pragma once
enum{
  null = 0,
  kernel_code = 0x9A,
  kernel_data = 0x92,
  user_code = 0xFA,
  user_data = 0xF2,
  task_access = 0x89,
};

enum{
    code = 0xA,
    data = 0xC,
    task_flags = 0x0,
};

typedef struct __attribute__((packed)){
    unsigned short limit;
	unsigned short base_low;
	unsigned char base_middle;
	unsigned char access;
	unsigned char flags;
	unsigned char base_high;
}GDT_ENTRY;

typedef struct __attribute__((packed)){
	unsigned short limit;
	unsigned long base;
}gdt_ptr;


static GDT_ENTRY gdt[5];

static gdt_ptr gdtr;
void set_gdt();
