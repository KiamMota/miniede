#ifndef MEDE_H
#define MEDE_H

#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

#if defined(_WIN32)
    #include <windows.h>

        struct WinProps
        {
            HANDLE W_HmedeIn;
            HANDLE W_HmedeOut;
            LPDWORD W_medeConsoleState;
        };

    #define CLEAR_SCREEN() system("cls");
#endif
#if defined(__linux__) || defined(__APPLE__)
        #include <termios.h>
    #define CLEAR_SCREEN() system("clear");
#endif

#define START_VAL 0

//  ESPECIFIC TYPEDEFS TO OPTMIZED TYPES

typedef signed short n_int;
typedef int8_t nn;
typedef uint8_t _bool;
typedef char* n_string;

// ----------------------- //
// ----- ANSI MACROS ----- //
// ----------------------- //

#define ESC "\033["
#define just_erase() printf(ESC "2J")

//  COLORS

//  TEXT VARABLES

#define tc_default "\033[37m"
#define tc_black "\033[30m"
#define tc_red "\033[31m"
#define tc_green "\033[32m"
#define tc_yellow "\033[33m"
#define tc_blue "\033[34m"
#define tc_magenta "\033[35m"


#define oncolor_text(tc_color) printf(tc_color)
#define offcolor_text() printf(tc_default)

//  BACKGROUND VARABLES

#define bk_default "\033[40m"
#define bk_red "\033[41m"
#define bk_green "\033[42m"
#define bk_yellouw "\033[44m"
#define bk_blue "\033[44m"
#define bk_magenta "\033[45m"
#define bk_cyan "\033[46m"
#define bk_white "\033[47m"

#define oncolor_back(bk_color) printf(bk_color)
#define offcolor_back(bk_colo) printf(bk_default)
//  CURSOR

#define cursor_home() printf(ESC "H");

#define START_Y 0
#define START_X 0

#define c_up "A"
#define c_dw "B"
#define c_lf "D"
#define c_rg "C"

#define cursor_in(n, move) printf("\033[%d;%c", (n), (move));

//  CURSOR STYLES

#define c_sblocky "\033[0 q"
#define c_blocky "\033[2 q"

#define c_sline "\033[3 q"
#define c_line "\033[4 q"

#define c_bar "\033[5 q"
#define c_sbar "\033[6 q"

//  CURSOR VISIBILITY

#define c_hide "?25l"
#define c_show "?25h"

// MACROS OF CURSOR

#define cursor_style(style) printf("%s", style)
#define cursor_pos() printf("\033] s");
#define cursor_mv(line, column) printf("\033[%d;%dH", (line + 1), (column + 1))
#define cursor_vs(visibility) printf(ESC "%s", visibility)
#define msg(message) printf("mede: %s.", message)

//  TERMINAL FLAGS

void setRawMode(nn freeFlag);
void mederun(void);
int byemede(void);


#endif //mede.h