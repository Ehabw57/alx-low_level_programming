#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - a var func that prints all it passend number sprated by
 * its separator
 * @separator: is a separator
 * @n: the cont of ints passed to the function
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{

	unsigned int i = 0;
	va_list nptr;


	va_start(nptr, n);

	while (i < n)
	{
		printf("%d%s", va_arg(nptr, int), separator != NULL ? separator : "");
		i++;
	}
printf("\n");

	va_end(nptr);
}
