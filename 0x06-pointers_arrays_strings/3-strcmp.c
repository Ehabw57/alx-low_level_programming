#include "main.h"

/**
 * _strcmp - a function that compare  tow strings
 * @s1: the firest string
 * @s2: the sec string
 * Return: 0 if s1 equals s2
 *	s1 - s2 if else
 **/
int _strcmp(char *s1, char *s2)
{
	while ((*s1 != '\0' && *s2 != '\0') && *s1 == *s2)
	{
		s1++;
		s2++
	}
	if (*s1 == s2)
	{
		return (0);
	}
	else
	{
		return (*s1 - *s2);
	}
}
