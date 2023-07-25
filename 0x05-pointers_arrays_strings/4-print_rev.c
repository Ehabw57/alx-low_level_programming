#include "main.h"
/**
* print_rev - is a function that puts a single line of text reversed
* @s: the line to reverse
**/
void print_rev(char *s)
{
	char *r = s;

	while (*r != '\0')
	{
		r++;
		r--;
		while (r >= s)
		{
			putchar(*r);
			r--;
		}
	}
		putchar('\n');
}
