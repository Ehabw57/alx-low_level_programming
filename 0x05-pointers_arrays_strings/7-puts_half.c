#include "main.h"

/**
 * puts_half - is a function that prints the half of text
 * @str: the text to print
 */
void puts_half(char *str)
{
	int c = 0;
	int n;
	int i;


	while (str[c] != '\0')
	{
		c++;
	}

	if (c % 2 == 0)
	{
		for (i = c  / 2; str[i] != '\0'; i++)
		{
			_putchar(str[i]);
		}
	}
	else
	{
		for (n = (c - 1) / 2; n < c - 1; n++)
		{
			_putchar(str[n + 1]);
		}
	}
	_putchar('\n');
}
