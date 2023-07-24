#include "main.h"
/**
 * _strlen - is a function that check the lenth of a text
 * @s: the counter
 * Return: always c
 **/
int _strlen(char *s)
{
	int c;

	while (*s > '\0')
	{
		s++;
		c++;
	}

	return (c);
}
