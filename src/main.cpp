#include "mede.h"


using namespace std;

int main()
{
	just_erase();
	cursor_mv(5, 5);
	printf("Hello, world!");
	cursor_vs(c_hide);
	getchar();
	bye();
	return 0;
}
