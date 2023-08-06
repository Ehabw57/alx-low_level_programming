#include "main.h"

/**
 * print_last_digit - is a function that prints the
 * last digit og  variable f
 * @f: the variable to print its last digit
 * Return: Alwyas s
 **/
int print_last_digit(int n)
{
	int a;

	if (n < 0)
		n = -n;

	a = n % 10;

	if (a < 0)
		a = -a;

	_putchar(a + '0');

	return (a);
}