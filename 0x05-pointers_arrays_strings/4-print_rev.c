#include "main.h"
/**
* print_rev - is a function that puts a single line of text reversed
* @s: the line to reverse
**/
 void print_rev(char *s)
{
while(*s != '\0')
{
	*s++;
}
while(*s >= '\0')
{
	*s--;
	putchar(*s);
	if(s == " ")
	{
		break;
	}
}
putchar('\n');
}
