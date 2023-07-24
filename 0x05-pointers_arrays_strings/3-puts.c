#include "main.h"
/**
 * _puts - is a function that puts a single line of text
 * @str: the line to put
 **/
void _puts(char *str)
{
	while (*str != 0)
	{
		putchar(*str);
		str++;
	}
	putchar('\n');
}
