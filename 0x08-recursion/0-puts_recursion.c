#include "main.h"

/**
 * _puts_recursion - puts function with recurion way
 *@s: the string to put
 **/
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		putchar(*s);
		s++;
		_puts_recursion(s);
	}
}
