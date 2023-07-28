#include "main.h"

/**
 * *_strncpy - a function that copyes tow strings
 * @dest: the one to copy text for
 * @src: the one to copy text from
 * @n: the index to copy
 * Return: always dest
 **/
char *_strncpy(char *dest, char *src, int n)
{
	int c;

	for (c = 0; c <= n - 1; c++)
	{
		    dest[c] = src[c];
	}
	dest[c] = '\0';
	return (dest);
}
