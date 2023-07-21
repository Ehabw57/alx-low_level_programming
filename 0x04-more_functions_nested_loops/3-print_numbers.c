#include "main.h"

/**
* print_numbers - prints numbers from 1 to 9
*/
void print_numbers(void)
{
	int f = 0;
		while (f < 10)
		{
			putchar(f + '0');
			f++;
		}
		putchar('\n');
}
