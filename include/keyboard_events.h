#include "mede.h"

extern n_int *kb_input;

// --------------------------------------------
// ---------- KEYBOARD GLOBAL EVENTS ----------
// --------------------------------------------

n_int isKb(n_int *_input);
_bool specialKeys(n_int *_in);
static nn _isSpace(n_int *_in);
static nn _isEnter(n_int *_in);
static nn _isBackSpace(n_int *_in);
static nn _isNormal(n_int *_in);
static nn _isText(n_int *_in);

struct keyboard_events
{
	nn (*isSpace)(n_int *);
	nn (*isEnter)(n_int *);
	nn (*isBackSpace)(n_int *);
	nn (*isNormal)(n_int *);
	nn (*isText)(n_int *);
};

extern keyboard_events kb;

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


// --------------------------------------------
// ---------- CURSOR GLOBAL EVENTS ------------
// --------------------------------------------

void moveSet(n_int *input);
enum MOVE
{
	K_UP = 30,
	K_DOWN,
	K_LEFT = 17,
	K_RIGHT = 16
};

