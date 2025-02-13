#include "mede.h"

extern nn_int *kb_inp;

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

static void _isUp(nn_int *kb_input);
static void _isDown(nn_int *kb_input);
static void _isLeft(nn_int *kb_input);
static void _isRight(nn_int *kb_input);

enum MOVE
{
	K_UP = 30,
	K_DOWN,
	K_LEFT = 17,
	K_RIGHT = 16
};

typedef struct
{
    void (*isUp)(nn_int *);
    void (*isDown)(nn_int *);
    void (*isLeft)(nn_int *);
    void (*isRight)(nn_int *);
} Kb_Cursor;

extern Kb_Cursor kb_c;



