#include "mede.h"
#include "keyboard_events.h"

#include <ctype.h>

n_int *kb_input = NULL;

int checkNullKb(n_int *kb_input)
{
	if(kb_input == NULL)
	{
		kb_input = (n_int *)calloc(1, sizeof(n_int));
		return 1
	}else
	{
		return 0;
	}

}

nn_int _isSpace(n_int *kb_input)
{
	switch(*kb_input)
	{
	case K_SPACE:
		return 1;
		break;
	default:
		return 0;
		break;
	}
}

nn_int _isEnter(n_int *kb_input)
{
	switch(*kb_input)
	{
	case K_ENTER:
		return 1;
		break;
	default:
		return 0;
		break;
	}
}

nn_int _isBackspace(n_int *kb_input)
{
	switch(*kb_input)
	{
	case K_BACKSPACE:
		return 1;
		break;
	default:
		return 0;
		break;
	}
}

nn_int _isNormal(n_int *kb_input)
{
	nn_int normal = isalnum(*kb_input);
	return normal;
}

nn_int _isText(n_int *kb_input)
{
	nn_int text =	(	isalnum(*kb_input)
					||	isspace(*kb_input)
					||	ispunct(*kb_input) );
	return text;
}

Kb_Ev kb_ev =
{
	.isSpace = _isSpace,
	.isEnter =  _isEnter,
	.isBackSpace = _isBackspace,
	.isNormal = _isNormal,
	.isText = _isText
};








