#include "mede.h"

#include "cursor.h"
#include "curses.h"

n_int *cursorx = NULL;
n_int *cursory = NULL;


int currentX(n_int *cursorx)
{

    getyx(stdscr, *cursory, *cursorx);

    return *cursorx;
}
int currentY(n_int *cursory)
{
    getyx(stdscr, *cursory, *cursorx);

    return *cursory;
}
