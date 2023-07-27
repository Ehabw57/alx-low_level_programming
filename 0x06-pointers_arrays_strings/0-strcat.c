#include "main.h"

/**
 * _strcat - a function that copyes tow strings
 * @dest: the one to copy text for
 * @src: the one to copy text from
 **/
char *_strcat(char *dest, char *src)
{
	int i;
	int c;

	for (i = 0; dest[i] != '\0'; i++)
	{

	}
	for (c = 0; src[c] != '\0'; c++)
	{
		    dest[i] = src[c];
		    i++;
	}
	dest[i] = '\0';
	return (dest);
}
