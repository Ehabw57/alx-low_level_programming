#include "main.h"

/**
 * _print_rev_recursion - this function peints the string in reverse
 *@s: the string to put
 **/
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
