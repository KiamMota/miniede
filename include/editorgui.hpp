#ifndef EDITORGUI_H
#define EDITORGUI_H

#include "mede.h"
#include "curses.h"
#include "keyboard_events.h"

class EditorGui
{
private:

WINDOW *edWin;
WINDOW *indWin;
WINDOW *upbWin;

public:
    void indexWin(nn_int *n);
    void editorWin(nn_int *kb_input);
    void upBarWin(nn_int *kb_input);
};


#endif // EDITORGUI_H
