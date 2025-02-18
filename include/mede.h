#ifndef MEDE_H
#define MEDE_H

#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

#ifdef _WIN32
    #include <windows.h>
    #define CLEAR_SCREEN() system("cls");
#elif __linux__ || __APPLE__
    #define CLEAR_SCREEN() system("clear");
#endif

#define START_VAL 0

//  ESPECIFIC TYPEDEFS TO OPTMIZED TYPES

typedef signed short n_int;
typedef int8_t nn_int;
typedef uint8_t _bool;
typedef char* n_string;

// ----------------------- //
// ----- ANSI MACROS ----- //
// ----------------------- //

#define ESC "\033["
#define just_erase() printf(ESC "2J")

//  COLORS

//  TEXT VARABLES

#define tc_default ESC "37m"
#define tc_black ESC "30m"
#define tc_red ESC "31m"
#define tc_green ESC "32m"
#define tc_yellow ESC "33m"
#define tc_blue ESC "34m"
#define tc_magenta ESC "35m"


#define oncolor_text(tc_color) printf(tc_color)
#define offcolor_text() printf(tc_default)

//  BACKGROUND VARABLES

#define bk_default "\033[40m"
#define bk_red "\033[41m"
#define bk_green "\033[42m"
#define bk_yellouw "\033[44m"
#define bk_blue "\033[44m"
#define bk_magenta "\033[45"
#define bk_cyan "\033[46"
#define bk_white "\033[47"

#define oncolor_back(bk_color) printf(bk_color);
#define offcolor_back(bk_colo) printf(bk_default);
//  CURSOR

#define cursor_home() printf(ESC "H");

#define START_Y 0
#define START_X 0

#define c_up "A"
#define c_dw "B"
#define c_lf "D"
#define c_rg "C"

//	CURSOR STYLES

#define c_sblocky ESC "0 q"
#define c_blocky ESC "2 q"

#define c_sline ESC "3 q"
#define c_line ESC "4 q"

#define c_bar ESC "5 q"
#define c_sbar ESC "6 q"

//	CURSOR VISIBILITY

#define c_hide "?25l"
#define c_show "?25h"

// MACROS OF CURSOR

#define cursor_style(style) printf("%s", style)
#define cursor_yx(y, x) printf(ESC "%d;%dR", (y + 1), (x + 1))
#define cursor_mv(line, column) printf(ESC "%d;%dH", (line + 1), (column + 1))
#define cursor_in(nn_int, move) printf(ESC "%d,%s", (nn_int), (move))
#define cursor_vs(visibility) printf(ESC "%s", visibility)
#define msg(message) printf("mede: %s.", message)

//  TERMINAL FLAGS

void mederun(void);
void remede(void);
int byemede(void);

#endif //mede.h
