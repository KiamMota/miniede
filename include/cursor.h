#ifndef CURSOR_H
#define CURSOR_h

#include "mede.h"
#include "curses.h"

extern n_int *cursorx;
extern n_int *cursory;

int currentX(n_int *cursorx);
int currentY(n_int *cursory);
int currentYX(n_int *cursory, n_int cursorx);

#endif // CURSOR_H
