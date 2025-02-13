#ifndef MEDE_H
#define MEDE_H

#include <stdint.h>
#include <stdio.h>

//	this lib loads miniEDE own types, defs and macros.

#define START_VAL 0
#define und_ptr 0

//typedefs to especific optimized types

typedef signed short n_int; //  nano int defined with 2 bytes
typedef int8_t nn_int;  //  nano nano int defined with 1 byte
typedef uint8_t n_bool; //  nano bool defined with 1 byte
typedef char* n_string; //  nano string

// ----------------------- //
// ----- ANSI MACROS ----- //
// ----------------------- //

#define ESC "\033["
#define ERASESCR ESC "2J"
#define just_erase() printf("%s", ERASESCR)

//CURSOR

#define cursor_home() printf(ESC "H");

#define c_up "A"
#define c_dw "B"
#define c_lf "D"
#define c_rg "C"

#define c_hide "?25l"
#define c_show "?25h"

#define cursor_mv(line, column) printf(ESC "%d;%dH", (line + 1), (column + 1))
#define cursor_in(nn_int, move) printf(ESC "%d,%s", (nn_int), (move))
#define cursor_vs(visibility) printf(ESC "%s", visibility)

void bye(void);

#endif //nede.h
