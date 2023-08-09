#include "main.h"
#include <stdlib.h>
/**
 * *_strdup - unction returns a pointer to a new string
 * which is a duplicate of the string
 * @str: is the given string to dub
 * Return: NULL if str is NULL or ptr is NULL
 * return ptr else
 **/
char *_strdup(char *str)
{
	int counter = 0;
	int i = 0;
	char *ptr;

	if (str == NULL)
	{
		return (NULL);
	}
	while (*str != '\0')
	{
		str++;
		counter++;
	}
	str -= counter;
	ptr = malloc(sizeof(char) * (counter + 1));
	if (ptr == NULL)
	{
	return (NULL);
	}
	for (; i < counter; i++)
	{
	*(ptr + i) = *(str + i);
	}
	return (ptr);
	free(ptr);
}
