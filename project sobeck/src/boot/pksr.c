#include "liz_print.h"
#include "alpha_variables.h"

void elizabet_sobeck();

void load_elizabet(){
    liz_print_clear();
    liz_print_set_color(PRINT_COLOR_YELLOW,PRINT_COLOR_BLACK);
    awake_alphas(all);
    liz_print_str("loading elizabet sobeck \n");
    elizabet_sobeck();
}
