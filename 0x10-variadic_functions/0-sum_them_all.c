#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - a func that sums all the given numbers
 * @n: number of numbers passed
 * Return: always r
*/
int sum_them_all(const unsigned int n, ...)
{
	va_list nptr;
	int i = 0, r;

	va_start(nptr, n);
	while (i < n)
	{
		r += va_arg(nptr, int);
		i++;
	}
	va_end(nptr);
	return (r);
}
