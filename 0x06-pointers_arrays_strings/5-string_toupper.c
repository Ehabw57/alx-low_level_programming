#include "main.h"

/**
 * *string_toupper - a function that convirets lower case char to
 * upper case
 * @str: the firest string
 * Return: always str
 **/
char *string_toupper(char *str)
{
	int c;

	for (c = 0; str[c] != '\0'; c++)
	{
		if (str[c] >= 'a' && str[c] <= 'z')
		{
			str[c] = str[c] - 32;
		}
	}
		return (str);
}
