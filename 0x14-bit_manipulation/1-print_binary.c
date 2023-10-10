#include "main.h"
/**
 * print_binary - converts unsigend int to binary
 * @n: the int to convert
*/
void print_binary(unsigned long int n)
{
	if (n > 0 && (n >> 1) > 0)
		print_binary(n >> 1);
	_putchar((n & 1) + '0');
}
