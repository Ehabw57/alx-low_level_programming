#include "main.h"

/**
 * *_memset - this func prints some text in the memory block
 *@s: the pointer that points to buffer
 *@b: the text to be printed
 *@n: the times to print
 *Return: always return s
 **/
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;


for (i = 0; i < n; i++)
{
	*(s + i) = b;
	
}
return (s);
}
