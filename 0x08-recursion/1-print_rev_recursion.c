#include "main.h"

/**
 * _puts_recursion - puts function with recurion way
 *@s: the string to put
 **/
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		s++;
		_print_rev_recursion(s);
		_putchar(*s);
	}
}
