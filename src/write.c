#include "mede.h"
#include "write.h"
#include "keyboard_events.h"

nn drawch(n_int *input)
{
	#if defined(_WIN32)
	char SHOW[] = "%c";
	input = (n_int *)malloc(sizeof(n_int));
	while(1)
	{
		moveSet(input);
	*input = getch();
		if(*input >= 97 && *input <= 122)
		{
			printf("\033[5@");  // Insere 5 espaços na posição do cursor

		}else if(*input >= 65 && *input <= 90)
		{
			printf(SHOW, *input);
		}else if(*input == K_SPACE)
		{
			printf(SHOW, *input);
		}else if(*input == K_BACKSPACE)
		{	
			putchar('\0');
		}else{
			printf(SHOW);
		}
	}
	
	return *input;
	#endif
}