#include "mede.h"


using namespace std;

int main()
{
	just_erase();
	cursor_mv(5, 5);
	printf("Hello, world!");
	CursorMoveSet(kb_input);
	getchar();
	return 0;
}
