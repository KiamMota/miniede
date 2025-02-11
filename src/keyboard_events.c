#include "mede.h"

#include "keyboard_events.h"

#include <ctype.h>

nn_int *kb_input = und_ptr;

n_bool k_isNormalKey(nn_int *kb_input)
{
    nn_int isnormalkey = (isalnum(*kb_input) ||
                          ispunct(*kb_input) ||
                          isspace(*kb_input)   );

    return *kb_input == isnormalkey ? 1 : 0;
}
n_bool k_isBackSpace(nn_int *kb_input)
{
    return *kb_input == 8 ? 1 : 0;
}
n_bool k_isEsc(nn_int *kb_input)
{
    return *kb_input == 127 ? 1 : 0;
}
/*
n_bool k_isNF(nn_int *kb_input)
{
    //  NC!
}
*/
n_bool k_isEnter(nn_int *kb_input)
{
    return *kb_input == 10? 1 : 0;
}
n_bool k_isCtrl(nn_int *kb_input)
{
    nn_int isctrl = (iscntrl(*kb_input));
    return isctrl;
}

Keyboard_Events kb_events = {
    .isNormalKey = k_isNormalKey,
    .isBackSpace = k_isBackSpace,
    .isEsc = k_isEsc,
    //.isNF = k_isNF,       // Precisa implementar ou remover, se não for usada
    .isEnter = k_isEnter,
    .isCtrl = k_isCtrl
};







