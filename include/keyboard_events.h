#ifndef KEYBOARD_EVENTS_H
#define KEYBOARD_EVENTS_H

#include "mede.h"

extern nn_int *kb_input;

n_bool k_isNormalKey(nn_int *kb_input);
n_bool k_isBackSpace(nn_int *kb_input);
n_bool k_isEsc(nn_int *kb_input);
n_bool k_isNF(nn_int *kb_input);
n_bool k_isEnter(nn_int *kb_input);
n_bool k_isCtrl(nn_int *kb_input);

typedef struct
{
    n_bool (*isNormalKey)(nn_int *);
    n_bool (*isBackSpace)(nn_int *);
    n_bool (*isEsc)(nn_int *);
    n_bool (*isNF)(nn_int *);
    n_bool (*isEnter)(nn_int *);
    n_bool (*isCtrl)(nn_int *);
} Keyboard_Events;

extern Keyboard_Events kb_events;



#endif // KEYBOARD_EVENTS_H




