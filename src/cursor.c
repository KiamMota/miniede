#include "mede.h"
#include "keyboard_events.h"

// -----------------------------
// ------- MOVIMENTATION -------
// -----------------------------

n_int cursy = START_VAL;
n_int cursx = START_VAL;

void _cursorMove(int *kb_input)
{
	checkNullKb(kb_input);
		//TODO LOGIC OF MOVIMENTATION
}

void _changeCursor(int *kb_input)
{
	if(*kb_input == K_F1)
	{
		cursor_style(c_bar);
	}else if(*kb_input == K_F2)
	{
		cursor_style(c_blocky);
	}else if(*kb_input == K_F3)
	{
		cursor_style(c_bar);
	}
}
Kb_Cursor kb_c =
{
	.cursorMove = _cursorMove,
	.changeCursor = _changeCursor
};

void initCursor(int *kb_input)
{
	while(1)
	{
		kb_c.changeCursor(kb_input);
		kb_c.cursorMove(kb_input);
	}
}