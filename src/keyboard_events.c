#include "mede.h"
#include "keyboard_events.h"
#include <ctype.h>

nn_int *kb_input = INVALID;

static n_bool k_isNormalKey(nn_int *kb_input)
{
    nn_int isnormalkey = (isalnum(*kb_input) ||
                         ispunct(*kb_input) ||
                         isspace(*kb_input)   );
}
static n_bool k_isBackSpace(nn_int *kb_input)
{
    nn_int isbackspace = (*kb_input = );
}
n_bool k_isEsc(nn_int *kb_input);
n_bool k_isNF(nn_int *kb_input);
n_bool k_isEnter(nn_int *kb_input);
n_bool k_isCtrl(nn_int *kb_input);








