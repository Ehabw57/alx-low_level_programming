#include "main.h"

/**
* print_most_numbers - prints numbers from 0 to 9 ecvept 2 and 4
*/
void more_numbers(void)
{
	int f = 0;
	int i = 0;
		while (f < 10)
		{
			for(i = 0; i < 15; i++)
			{
				putchar(i / 10 + '0');
				putchar(i % 10 + '0');
			}
			putchar('\n');
			f++;
		}
}
