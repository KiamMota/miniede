#include "mede.h"

extern n_int *kb_input;

// --------------------------------------------
// ---------- KEYBOARD GLOBAL EVENTS ----------
// --------------------------------------------

int checkNullKb(n_int *kb_input);
static nn_int _isSpace(n_int *kb_input);
static nn_int _isEnter(n_int *kb_input);
static nn_int _isBackSpace(n_int *kb_input);
static nn_int _isNormal(n_int *kb_input);
static nn_int _isText(n_int *kb_input);

typedef enum KEYS
{
	K_SPACE = 32,
	K_TAB = 9,
	K_ENTER = 13,
	K_DELETE = 127,
	K_BACKSPACE = 8,
	K_F1 = 112,
	K_F2,
	K_F3,
	K_F4,
	K_F5,
	K_F6,
	K_F7,
	K_F8,
	K_F9,
	K_F10,
	K_F11,
	K_F12
} KEYS;

typedef struct
{
    nn_int (*isSpace)(n_int *);
   	nn_int (*isEnter)(n_int *);
    nn_int (*isBackSpace)(n_int *);
    nn_int (*isNormal)(n_int *);
    nn_int (*isText)(n_int *);
} Kb_Ev;

extern Kb_Ev kb_ev;

// --------------------------------------------
// ---------- CURSOR GLOBAL EVENTS ------------
// --------------------------------------------

extern n_int cursy;
extern n_int cursx;

static void _cursorMove(n_int *kb_input);
static void _changeCursor(n_int *kb_input);
void initCursor(n_int *kb_input);

enum MOVE
{
	K_UP = 30,
	K_DOWN,
	K_LEFT = 17,
	K_RIGHT = 16
};

typedef struct
{
    void (*cursorMove)(int *);
    void (*changeCursor)(int *);
} Kb_Cursor;

extern Kb_Cursor kb_c;

