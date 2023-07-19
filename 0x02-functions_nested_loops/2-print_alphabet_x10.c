#include "main.h"
/**
 * print_alphabet_x10 - prints the alphabet in lower case 10 times
 *
 * Return: Always 0
 */

void print_alphabet_x10(void)
{
	char a;
	int l = 1;

	while (l <= 10)
	{
	l++;
		for (a = 'a'; a <= 'z'; a++)
		{
			_putchar(a);
}
_putchar('\n');
}
}
