#include "main.h"
/**
 * print_sign - sees if the intered method is bigger or lower or equal zero
 * @c: is a parameter that recives a value from main funciton
 * Return: ussally (0)
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	if else(n == 0) 
	{
		_putchar('0');
		return (1);
	}
		else(n < 0)
		{
		_putchar('-');
		return (-1);
	}
}
