#include "main.h"
#include <stdlib.h>
/**
 *
 *
 *
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
	ptr = malloc(sizeof(char) * counter);
	if (ptr == NULL)
	{
	return (NULL);
	}
	for (; i <= counter; i++)
	{
	*(ptr + i) = *(str + i);
	}
	return (ptr);
	free(ptr);
}
