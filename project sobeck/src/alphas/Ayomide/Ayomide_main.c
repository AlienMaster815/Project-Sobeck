#include "alpha_variables.h"
#include "liz_print.h"
#include "pic.h"
#include "interrupts.h"
#include "pci.h"
uint8_t ayomide_panic_status;
uint8_t ayomide_awake(){
    uint8_t set_up_interrupts();
    liz_print_str("interrupts are running\n");
    PIC_remap(0x08,0x70); //pic has been depreciated
    liz_print_str("pic is running\n");
    pic_shutdown();
    liz_print_str("pic is shutdown\n");
    enable_apic();
    liz_print_str("apic enabled\n");
    pci_start();
    liz_print_str("pci scanned\n");
}
