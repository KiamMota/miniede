#include "mede.h"
#include <stdio.h>

using namespace std;

int main()
{
	int input;
	just_erase();
	cursor_init();
	printf("Hello, world!");
	fgets(&input, sizeof(input), stdin);
	return 0;
}
