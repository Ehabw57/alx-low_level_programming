#include "main.h"

/**
* more_numbers - prints numbers from 0 to 14 ten times
*/
void more_numbers(void)
{
	int f = 0;
	int i = 0;
		while (f < 10)
		{
			for (i = 0; i < 15; i++)
			{
				if (i > 9)
				{
				putchar(i / 10 + '0');
				putchar(i % 10 + '0');
				}
				else
				{
					putchar(i + '0');
				}
			}
			putchar('\n');
			f++;
		}
		}
