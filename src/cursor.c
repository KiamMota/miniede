#include "mede.h"

#include "keyboard_events.h"

// -----------------------------
// ------- MOVIMENTATION -------
// -----------------------------

n_bool _isUp(nn_int *kb_input)
{
	if(*kb_input == K_UP)
	{
		printf("cursor^");
	}
}

n_bool _isDown(nn_int *kb_input)
{

	if(*kb_input == K_DOWN)
	{
		printf("cursorDW");
	}
}

n_bool _isLeft(nn_int *kb_input)
{
	if(*kb_input == K_LEFT)
	{
		printf("CURSOR<");
	}
}

n_bool _isRight(nn_int *kb_input)
{
	if(*kb_input == K_RIGHT)
	{
		printf("cursor>");
	}
}

Kb_cursor kb_cursor = 
{
	._isUp = isUp,
	._isDown = isDown,
	._isLeft = isLeft,
	._isRight = isRight
};
