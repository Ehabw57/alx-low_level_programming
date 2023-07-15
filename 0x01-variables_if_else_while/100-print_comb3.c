#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - is a function that prints
 * all possible different combinations of two digits
 * Return: 0 (success)
 */
int main(void)
{
	int fnum, snum;

	for (fnum = 0; fnum < 9; fnum++)
	{
		for (snum = 1 + fnum; snum <= 9; snum++)
		{
			putchar(fnum + '0');
			putchar(snum + '0');
			if (fnum == 8 && snum == 9)
			{
				putchar('\n');
			}
					else
					{
						putchar(',');
						putchar(' ');
					}
		}
	}

return (0);
}
