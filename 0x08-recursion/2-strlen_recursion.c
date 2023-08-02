#include "main.h"
/**
 * _strlen_recursion- this function peints the string in reverse
 *@s: the string to put
 *Return: return always i
 **/
int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s != '\0')
	{
		i++;
		i =  _strlen_recursion(s + 1) + i;
	}

	return (i);
}
