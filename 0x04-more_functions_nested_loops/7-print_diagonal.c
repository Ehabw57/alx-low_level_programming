#include "main.h"
/**
 *  print_diagonal - prints n lines
 * @n: number of lines to print
 */
void print_diagonal(int n)
{
	int i, j;

	for (j = 0; j < n; j++)
	{
		for (i = 0; j > i; i++)
			_putchar(' ');

		_putchar('\\');
		_putchar('\n');
	}
	if (n <= 0)
		_putchar('\n');
}
