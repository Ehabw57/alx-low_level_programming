#include "main.h"

/**
* print_most_numbers - prints numbers from 0 to 9 ecvept 2 and 4
*/
void print_most_numbers(void)
{
	int f = 0;
		while (f < 10)
		{
			if (f == 2 || f == 4)
			{
				f++;
			}
			putchar(f + '0');
			f++;
		}
		putchar('\n');
}
