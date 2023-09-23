/**
 * *_strpbrk - attempts to find the first occurrence of
 * any character from the accept string
 * @s: source string
 * @accept: accept string
 * Return:  a pointer to the byte in s that matches one of the bytes in accept
 * ,NULL if no such byte is found
 */
#include "main.h"
char *_strpbrk(char *s, char *accept)
{
	int i = 0, j;

	while (s[i] != '\0')
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
				return (&(s[i]));
		}
		i++;
	}
	return (NULL);
}
