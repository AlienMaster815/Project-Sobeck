#pragma once

#include "print_library.h"

void liz_print_newline();
void liz_clear_row(size_t row);
void liz_print_clear();
void liz_print_char(char charecter);
void liz_print_str(char* string);
void liz_print_set_color(unsigned char foreground, unsigned char background);
void liz_print_hex(uint8_t key);
void liz_scroll(int line);
