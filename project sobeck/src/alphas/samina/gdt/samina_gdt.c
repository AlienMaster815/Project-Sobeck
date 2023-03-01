
#include "alpha_variables.h"
#include "liz_print.h"
#include "gdt.h"

extern void* setGdt(unsigned short limit,unsigned long base);


void set_gdt(){
    gdtr.limit = sizeof(gdt)  - 1;
	gdtr.base = (unsigned long)&gdt;

    gdt[0].base_low = 0;
    gdt[0].base_middle = 0;
    gdt[0].base_high = 0;


    gdt[0].access = 0x00;
    gdt[0].flags = 0x00;
    uint8_t i = 1;
    for(i ; i < 5; ++i)
    {

        gdt[i].base_low = 0;
        gdt[i].base_middle = 0;
        gdt[i].base_high = 0;

        if(i == 1){
            gdt[i].access = kernel_code;
            gdt[i].flags = code;
            liz_print_str("kernel gdt code enabled\n");
        }
        if(i == 2){
            gdt[i].access = kernel_data;
            gdt[i].flags = data;
            liz_print_str("kernel gdt data enabled\n");
        }
        if(i == 3){
            gdt[i].access = user_code;
            gdt[i].flags = code;
            liz_print_str("user gdt code enabled\n");
        }
        if(i == 4){
            gdt[i].access = user_data;
            gdt[i].flags = data;
            liz_print_str("user gdt data enabled\n");
        }
        if(i == 5){ liz_print_str("foobar\n");
        }

    }

gdtr.limit = sizeof(gdt)  - 1;
gdtr.base = (unsigned long)&gdt;

    setGdt(gdtr.limit, gdtr.base);

}
