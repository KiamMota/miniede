#ifndef MEDE_H
#define MEDE_H

#include <stdint.h>
#include <stdio.h>

//	this lib loads miniEDE own types, defs and macros.

#define START_VAL 0
#define und_ptr 0

//typedefs to especific optimized types

typedef signed short n_int; //short unsigend
typedef int8_t nn_int;  //  nano nano int defined with 1 byte
typedef uint8_t n_bool; //  nano bool defined with 1 byte
typedef char* n_string; //  nano string

// ----------------------- //
// ----- ANSI MACROS ----- //
// ----------------------- //

#define ESC "\033["
#define just_erase() printf(ESC "2J")

//CURSOR

#define cursor_home() printf(ESC "H");

//	CURSOR MOVE

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

#define c_sbar ESC "5 q"
#define c_bar ESC "6 q"

//	CURSOR VISIBILITY

#define c_hide "?25l"
#define c_show "?25h"

// DEFINITIONS

#define cursor_style(style) printf("%s", style)

#define cursor_yx(y, x) printf(ESC "%d;%dR", (y + 1), (x + 1))

#define cursor_save() printf(ESC "s")

#define cursor_retpos() printf(ESC "u")

#define cursor_mv(line, column) printf(ESC "%d;%dH", (line + 1), (column + 1))

#define cursor_in(nn_int, move) printf(ESC "%d,%s", (nn_int), (move))

#define cursor_vs(visibility) printf(ESC "%s", visibility)

void mederun(void);
void remede(void);
void byemede(void);



#endif //mede.h
