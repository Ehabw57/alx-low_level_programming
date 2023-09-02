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
				_putchar(i / 10 + '0');
				_putchar(i % 10 + '0');
				}
				else
					_putchar(i + '0');
			}
			_putchar('\n');
			f++;
		}
		}
