#include "mede.h"

void mederun()
{
	just_erase();
	cursor_vs(c_show);
	cursor_style(c_bar);
	cursor_mv(START_Y, START_X);
}

void remede()
{
	cursor_save();
	just_erase();
	cursor_retpos();
}

void byemede()
{
	just_erase();
	cursor_vs(c_show);
	cursor_style(c_sbar);
}

