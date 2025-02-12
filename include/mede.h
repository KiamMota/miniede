#ifndef MEDE_H_INCLUDED
#define MEDE_H_INCLUDED

#include <stdint.h>

//	this lib loads miniEDE own types, defs and macros.


#define START_VAL 0
#define und_ptr 0

//typedefs to especific optimized types

typedef signed short n_int; //  nano int defined with 2 bytes
typedef int8_t nn_int;  //  nano nano int defined with 1 byte
typedef uint8_t n_bool; //  nano bool defined with 1 byte
typedef char* n_string; //  nano string

//-----------------------//
//	ESC ANSI	 //
//-----------------------//

#define ESC "\033["
#define ERASESCR ESC "2J"
#define just_erase() printf("%s", ERASESCR)
//CURSOR

#define c_up "A"
#define c_dw "B"
#define c_lf "D"
#define c_rg "C"

#define c_hide "?25l"
#define c_show "?25h"

#define cursor_init() ESC "H"
#define cursor_mv(nn_int, direc) ESC #nn_int direc
#define cursor_vs(visibility) ESC #visibility








#endif //nede.h
