#include "main.h"

/**
 * print_last_digit - is a function that prints the
 * last digit og  variable f
 * @f: the variable to print its last digit
 * Return: Alwyas s
 **/
int print_last_digit(int n)
{
	int i;

	if (n < 0)
		n = -n;

	i = n % 10;

	if (i < 0)
		i = -i;

	_putchar(i + '0');

	return (i);
}
