#include "main.h"
/**
 * print_line - prints n lines
 * @n: number of lines to print
*/
void print_line(int n)
{
	for (; n > 0; n--)
		_putchar('_');

	putchar('\n');
}
