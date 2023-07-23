#include "main.h"

/**
 * times_table - is a function that prints every min of the day
 **/
void times_table(void)
{
	int r, c, v;

	for (r = 0; r <= 9; r++)
	{
		for (c = 0; c <= 9; c++)
		{
			v = r * c;
			if (v > 9)
			{
				_putchar(v / 10 + '0');
				_putchar(v % 10 + '0');
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar(v + '0');
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
