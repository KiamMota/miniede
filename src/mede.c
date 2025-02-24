#include "mede.h"
#include "keyboard_events.h"

#if defined(_WIN32) //WINPROPS INIT

#include <windows.h>

struct WinProps *wp = NULL;

#endif

void mederun()
{
    kb_input = (n_int *)malloc(sizeof(n_int));
    CLEAR_SCREEN();
    setRawMode(1);
    cursor_vs(c_show);
    cursor_style(c_bar);
    cursor_mv(START_Y, START_X);
}

int byemede()
{
    CLEAR_SCREEN();
    msg("close safety");
    cursor_vs(c_show);
    cursor_style(c_bar);
    setRawMode(0);
    return 0;
}

void setRawMode(nn freeFlag)
{
    #if defined(_WIN32)

    // ***************************
    // * W I N D O W S   M O D E *
    // ***************************

    if(wp == NULL)
    {
        wp = (struct WinProps *)malloc(sizeof(struct WinProps));
    }
    wp->W_HmedeIn = GetStdHandle(STD_INPUT_HANDLE);
    wp->W_HmedeOut = GetStdHandle(STD_OUTPUT_HANDLE);
    wp->W_medeConsoleState = (LPDWORD)malloc(sizeof(DWORD));

    if(GetConsoleMode(wp->W_HmedeIn, wp->W_medeConsoleState))
    {
        *wp->W_medeConsoleState |= ENABLE_VIRTUAL_TERMINAL_PROCESSING;
        *wp->W_medeConsoleState &= ~ENABLE_ECHO_INPUT;
        *wp->W_medeConsoleState &= ~ENABLE_LINE_INPUT;
        SetConsoleMode(wp->W_HmedeIn, *wp->W_medeConsoleState);
    }else if(wp->W_medeConsoleState)
    {
        printf("mede ERR(1): failed to set Windows raw mode!");
        free(wp->W_medeConsoleState);
    }

    switch(freeFlag)
    {
    case 0:
        if(wp->W_medeConsoleState)
        {
            *wp->W_medeConsoleState &= ~ENABLE_LINE_INPUT;
            *wp->W_medeConsoleState &= ~ENABLE_ECHO_INPUT;
            SetConsoleMode(wp->W_medeConsoleState, *wp->W_medeConsoleState);
            free(wp->W_medeConsoleState);
            wp = NULL;
        }

    break;
    }
    #endif
}