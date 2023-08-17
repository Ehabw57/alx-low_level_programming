#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - a function that prints passed strings and separtor
 * @separator: is the separator
 * @n: is the number of strings passed to func
*/
void print_strings(const char *separator, const unsigned int n, ...)
{

	unsigned int i = 0;
	va_list nptr;
	char *store;

	va_start(nptr, n);

	for (i = 0; i < n; i++)
	{
		store = va_arg(nptr, char *);
		printf("%s", store != NULL ? store : "(nil)");

		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");

	va_end(nptr);
}
