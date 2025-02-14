#include "mede.h"

#include "keyboard_events.h"

// -----------------------------
// ------- MOVIMENTATION -------
// -----------------------------

n_int cursy = START_VAL;
n_int cursx = START_VAL;

void _cursorMove(n_int *kb_input)
{
	cursor_yx(cursy, cursx);
	switch(*kb_input)
	{
		case K_UP:
			cursor_mv(cursy - 1, cursx);
			break;
		case K_DOWN:
			cursor_mv(cursy + 1, cursx);
			break;
		case K_LEFT:
			cursor_mv(cursy, cursx - 1);
			break;
		case K_RIGHT:
			cursor_mv(cursy, cursx + 1);
			break;
	}
}

Kb_Cursor kb_c = 
{
	_cursorMove
};

void cursorMoveSet(n_int *kb_input)
{
	while(1)
	{
		*kb_input = getchar();
		kb_c.cursorMove(*kb_input);
	}
}
