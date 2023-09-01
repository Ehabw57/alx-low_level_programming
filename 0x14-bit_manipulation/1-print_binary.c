#include "main.h"
/**
 * print_binary - convert unsigend int to binary
 * @n: the unsigend int to convert
 */
void print_binary(unsigned long int n)
{
	unsigned int r = n & 1;

	if (n > 0)
	{
		if (n >> 1 != 0)
			print_binary((n >> 1));
		_putchar(r + '0');
	}
	else
		_putchar(r + '0');
}
