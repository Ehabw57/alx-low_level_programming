#include <stdio.h>
/**
 * main - is a function that prints
 * all possible different combinations of three digits
 * Return: 0 (success)
 */
int main(void)
{
	int fn, sn, tn;

	for (fn = 0; fn < 8; fn++)
	{
		for (sn = 1 + fn ; sn < 9; sn++)
		{
			for (tn = 1 + sn; tn <= 9; tn++)
			{
			putchar(fn + '0');
			putchar(sn + '0');
			putchar(tn + '0');
			if (fn == 8 && sn == 9)
			{
				putchar('\n')
			}
			else
					{
						putchar(',');
						putchar(' ');
					}
			}
		}
	}

return (0);
}
