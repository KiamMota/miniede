#include "curses.h"
#include "mede.h"
using namespace std;

int main()
{
	initscr();
	n_int input;
	while(1)
	{
		input = getch();
		printw("HELLO, MAKEFILE!");
		refresh();
	}

	endwin();
	return 0;
}
