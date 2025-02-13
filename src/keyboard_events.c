#include "mede.h"

#include "keyboard_events.h"
#include <ctype.h>

nn_int *kb_inp = und_ptr;

n_bool _isSpace(nn_int *kb_input)
{
    return *kb_input == 32 ? 1 : 0;
}
n_bool _isEnter(nn_int *kb_input)
{
    return *kb_input == 10 ? 1 : 0;
}
n_bool _isBackSpace(nn_int *kb_input)
{
    return *kb_input == 8 ? 1 : 0;
}
n_bool _isNormal(nn_int *kb_input)
{
    nn_int isnormal = (isalnum(*kb_input));
    if(isnormal)
    {
        return 1;
    }else
    {
        return 0;
    }
}
static n_bool _isText(nn_int *kb_input)
{
    nn_int istext = (isalnum(*kb_input) ||
                     isspace(*kb_input) ||
                     ispunct(*kb_input));
    if(istext)
    {
        return 1;
    }else
    {
        return 0;
    }
}

Kb_Ev kb_ev =
{
    _isSpace,
    _isEnter,
    _isBackSpace,
    _isNormal,
    _isText
};



