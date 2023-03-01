
#include "liz_print.h"


const static size_t NUM_COLS = 80;
const static size_t NUM_ROWS = 25;

struct letter{
    unsigned char charecter;
    unsigned char color;
};

struct letter* buffer = (struct letter*) 0xb8000;

size_t col = 0;
size_t row = 0;
uint8_t color = PRINT_COLOR_WHITE | PRINT_COLOR_BLACK << 4;

void liz_clear_row(size_t row){
    struct letter empty = (struct letter){
        charecter:' ',
        color: color,
    };

    for(size_t col = 0; col < NUM_COLS; col++){
        buffer[col + NUM_COLS * row] = empty;
    }
}

void liz_print_clear(){
    for(size_t i = 0; i < NUM_ROWS; i++){
            liz_clear_row(i);
    }
}


void liz_print_char(char charecter){
    if(charecter == '\n'){
        liz_print_newline();
        return;
    }
    if(col > NUM_COLS){
        liz_print_newline();
    }
    buffer[col + NUM_COLS * row] = (struct letter){
            charecter: (uint8_t) charecter,
            color: color,
    };
    col++;
}

void liz_print_newline(){
    col = 0;

    if(row < NUM_ROWS - 1){
        row++;
        return;
    }
    for(size_t row = 1; row < NUM_ROWS; row++){
        for(size_t col = 0; col < NUM_COLS; col++){
            struct letter charecter = buffer[col + NUM_COLS * row];
            buffer[col + NUM_COLS * (row -1)] = charecter;
        }
    }
    liz_clear_row(NUM_COLS -1);
}

void liz_print_str(char* string){
    for(size_t i = 0; 1; i++){
        char charecter = (uint8_t) string[i];

        if(charecter == '\0'){
            return;
        }

        liz_print_char(charecter);
    }
}

void liz_print_set_color(unsigned char foreground, unsigned char background){
        color = foreground + (background << 4);
}

