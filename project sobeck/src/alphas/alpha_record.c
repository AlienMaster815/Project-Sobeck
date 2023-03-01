#include "alpha_variables.h"
#include "liz_print.h"
#include "io.h"


void awake_alphas(uint8_t alpha){
    uint8_t panic_check;
    if(alpha == all){
        panic_check = samina_awake();
        panic_check = ayomide_awake();
    }

    if(alpha == samina){
        panic_check = samina_awake();
    }
    if(alpha == ayomide){
        panic_check = ayomide_awake();
    }
   // detect_cores(rsdt);   liz_print_str("cpu information stored\n");

    if(panic_check == 1)panic_waking_alpha();
    else liz_print_str("my alphas have been awaken\n");
}


void panic_waking_alpha(){
    liz_print_str("shutting down");
    asm volatile("hlt");
}
