#include "mede.h"

#include "keyboard_events.h"

// -----------------------------
// ------- MOVIMENTATION -------
// -----------------------------

void _isUp(nn_int *kb_input)
{
	if(*kb_input == K_UP)
	{
		printf("cursor^");
	}
}

void _isDown(nn_int *kb_input)
{

	if(*kb_input == K_DOWN)
	{
		printf("cursorDW");
	}
}

void _isLeft(nn_int *kb_input)
{
	if(*kb_input == K_LEFT)
	{
		printf("CURSOR<");
	}
}

void _isRight(nn_int *kb_input)
{
	if(*kb_input == K_RIGHT)
	{
		printf("cursor>");
	}
}

Kb_Cursor kb_c = 
{
	_isUp,
	_isDown,
	_isLeft,
	_isRight
};
