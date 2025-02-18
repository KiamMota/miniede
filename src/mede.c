#include "mede.h"

void mederun()
{
    CLEAR_SCREEN();
    cursor_vs(c_show);
    cursor_style(c_bar);
    cursor_mv(START_Y, START_X);
}

void remede()
{
    //TODO
}

int byemede()
{
    CLEAR_SCREEN();
    msg("close safety");
    cursor_vs(c_show);
    cursor_style(c_bar);
    return 0;
}

