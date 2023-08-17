#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - a func that sums all the given numbers
 * @n: number of numbers passed
 * Return: r if sucsees or 0 if fails
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list nptr;
	unsigned int i = 0;
	int r = 0;

	if (n == 0)
		return (0);

	va_start(nptr, n);
	while (i < n)
	{

		r += va_arg(nptr, int);
		i++;
	}
	va_end(nptr);
	return (r);
}
