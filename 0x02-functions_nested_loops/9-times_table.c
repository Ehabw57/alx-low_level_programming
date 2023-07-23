#include "main.h"

/**
 * times_table - is a function that prints every min of the day
 **/
void times_table(void)
{
	int r, c, v;

	for (r = 0; r <= 9; r++)
	{
		putchar('0');
		for (c = 1; c <= 9; c++)
		{
			v = r * c;
			putchar(',');
			putchar(' ');
			if (r * c < 10)
			{
				putchar(' ');
				putchar(v + '0');
			}
			else
			{
				putchar(v / 10 + '0');
				putchar(v % 10 + '0');
			}
		}
		putchar('\n');
	}
}
