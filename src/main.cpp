#include "mede.h"
#include "curses.h"
#include "keyboard_events.h"

using namespace std;

int main()
{
	initscr();
	n_int input;
    cbreak();
    printw("hello, miniede!");
    getch();
	refresh();
	endwin();
	return 0;
}
