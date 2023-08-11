#include <stdlib.h>
#include "main.h"
/**
 * _strlen - findes the lenth of the string
 * @s: the string to find its lenth
 * Return: always c
 **/
int _strlen(char *s)
{
	int c = 0;

	while (*s > '\0')
	{
		s++;
		c++;
	}

	return (c);
}
/**
 * *_strncpy - copyes a src string to the dest string
 * @dest: the one to copy text for
 * @src: the one to copy text from
 * @n: the indexes to be copyed
 * Return: Always dest
 **/
char *_strncpy(char *dest, char *src, int n)
{
	int c = 0;

	while (src[c] != '\0' && c < n)
	{
		dest[c] = src[c];
		c++;
	}
	while (c < n)
	{
		dest[c] = '\0';
		c++;
	}
	return (dest);
}
/**
 * *string_nconcat - return a pointer which contains s1,
 * followed by the first n bytes of s2, and null terminated
 * @s1: the first string
 * @n: the number of index to copy
 * @s2: the string to copy 'n' indexes from
 * Return: NULL If the function fails
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int len1, len2;

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}

	len1 = _strlen(s1);
	len2 = _strlen(s2);

	if (n >= len2)
	{
		n = len2;
	}

	ptr = malloc(sizeof(char) * (len1 + n + 1));
	if (ptr == NULL)
	{
		return (NULL);
	}

	_strncpy(ptr, s1, len1);
	_strncpy(ptr + len1, s2, n);
	ptr[len1 + n] = '\0';

	return (ptr);
}
