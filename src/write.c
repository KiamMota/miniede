#include "mede.h"
#include "write.h"
#include "keyboard_events.h"

void getWrite(n_int *inpt)
{
    //*inpt = getch();
}

void buffer(n_int *inpt)
{
    if(wp == NULL)
    {
        wp = (struct WinProps *)malloc(sizeof(struct WinProps));
    }
    wp->W_HmedeOut = GetStdHandle(STD_OUTPUT_HANDLE);
    const n_int MAX_BUFFER_SZ = 50;
    char *bff[MAX_BUFFER_SZ];
#if defined(_WIN32)

    WriteConsole(wp->W_HmedeOut, (char *)bff, MAX_BUFFER_SZ, NULL, NULL);

#endif

    /*

    if(kb.isBackSpace(inpt))
        {
            BUFFER_SZ--;
            bff[BUFFER_SZ] = *inpt;
            putchar('\0');
        }
    else if(BUFFER_SZ != MAX_BUFFER_SZ)
        {
            bff[BUFFER_SZ] = *inpt;
            BUFFER_SZ++;
            printf("%c", *inpt);
        }
    */
}
