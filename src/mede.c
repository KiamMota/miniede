#include "mede.h"

#ifdef _WIN32
    #include <windows.h>
#elif __linux__ || __APPLE__
    #include <terminos.h>
#endif

void mederun()
{
    CLEAR_SCREEN();
    setRawMode(1);
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
    setRawMode(0);
    return 0;
}

void setRawMode(nn_int freeFlag)
{
    #if defined(_WIN32)

    // ***************************
    // * W I N D O W S   M O D E *
    // ***************************

    HANDLE WIN_medeHandle = GetStdHandle(STD_INPUT_HANDLE);
    LPDWORD WIN_medeConsoleState = (LPDWORD)malloc(sizeof(DWORD));
    if(GetConsoleMode(WIN_medeHandle, WIN_medeConsoleState))
    {
        *WIN_medeConsoleState &= ENABLE_ECHO_INPUT;
        SetConsoleMode(WIN_medeHandle, *WIN_medeConsoleState);

    }else if(!WIN_medeConsoleState)
    {
        printf("mede ERR(1): failed to set Windows raw mode!");
        free(WIN_medeConsoleState);
    }

    switch(freeFlag)
    {
    case 0:
        if(WIN_medeConsoleState)
        {
            free(WIN_medeConsoleState);
            WIN_medeConsoleState = NULL;
        }
    break;
    }
    #endif
}
