#include "mede.h"

extern n_int *kb_inp;

// --------------------------------------------
// ---------- KEYBOARD GLOBAL EVENTS ----------
// --------------------------------------------

static n_bool _isSpace(nn_int *kb_input);
static n_bool _isEnter(nn_int *kb_input);
static n_bool _isBackSpace(nn_int *kb_input);
static n_bool _isNormal(nn_int *kb_input);
static n_bool _isText(nn_int *kb_input);

typedef struct
{
    n_bool (*isSpace)(nn_int *);
    n_bool (*isEnter)(nn_int *);
    n_bool (*isBackSpace)(nn_int *);
    n_bool (*isNormal)(nn_int *);
    n_bool (*isText)(nn_int *);
} Kb_Ev;

extern Kb_Ev kb_ev;

// --------------------------------------------
// ---------- CURSOR GLOBAL EVENTS ------------
// --------------------------------------------

extern n_int cursy;
extern n_int cursx;

static void _cursorMove(n_int *kb_input);
static void CursorMoveSet(n_int *kb_input);
enum MOVE
{
	K_UP = 30,
	K_DOWN,
	K_LEFT = 17,
	K_RIGHT = 16
};

typedef struct
{
    void (*cursorMove)(n_int *);
} Kb_Cursor;

extern Kb_Cursor kb_c;

void bye(void);

