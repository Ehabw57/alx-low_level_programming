#include "main.h"

/**
 * _puts_recursion - puts function with recurion way
 *@s: the string to put
 **/
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		s++;
		_puts_recursion(s);
	}
	else if (*s == '\0')
{
_putchar('\n');
}
}
