#include "alpha_variables.h"
#include "liz_print.h"
#include "paging.h"
uint8_t samina_awake(){
    uint8_t page_status;
    page_status = samina_start_paging();
    set_gdt();

    if(page_status == 1){
        liz_print_str("Samina reports paging could not be started\n");
        return 1;
    }
    else{
        return 0;
    }
}
