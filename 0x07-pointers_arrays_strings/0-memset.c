#include "main"

/**
 * *_memset - this func prints some text in the memory block
 *@s: the pointer that points to buffer
 *@b: the text to be printed
 *@n: the times to print
 **/
char *_memset(char *s, char b, unsigned int n)
{
int i;

for (i = 0; i < n; i++)
{
	*s = b;
	s++;
}
}
