#ifndef MEDE_H_INCLUDED
#define MEDE_H_INCLUDED

#include <stdint.h>


#define START_VAL 0
#define und_ptr 0
//typedefs to especific optimized types

typedef signed short n_int; //  nano int defined with 2 bytes
typedef int8_t nn_int;  //  nano nano int defined with 1 byte
typedef uint8_t n_bool; //  nano bool defined with 1 byte
typedef char* n_string; //  nano string

#endif //nede.h
