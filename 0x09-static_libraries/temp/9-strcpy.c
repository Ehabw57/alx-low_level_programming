#include "main.h"

/**
 * _strcpy - this func co pystring to the other one
 * @dest: the one to copy text for
 * @src: the one to copy text from
 **/
char *_strcpy(char *dest, char *src)
{
	int c;

	for (c = 0; src[c] != '\0'; c++)
	{
		dest[c] = src[c];
	}
	dest[c] = '\0';

	return (dest);
}
