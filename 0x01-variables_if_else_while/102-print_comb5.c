#include <stdio.h>
/**
 * main - is a function that prints
 * all possible different combinations of tow tow digits :'(
 * Return: 0 (success)
 */
int main(void)
{

int f, s;

for (f = 0; f < 99; f++)
{
	for (s = f + 1; s <= 99; s++)
	{
		putchar(f / 10 + '0');
		putchar(f % 10 + '0');
		putchar(' ');
		putchar(s / 10 + '0');
		putchar(s % 10 + '0');
		if (f == 98 && s == 99)
		{
			break;
		}
		putchar(',');
		putchar(' ');
	}
}
putchar('\n');

return (0);
}
