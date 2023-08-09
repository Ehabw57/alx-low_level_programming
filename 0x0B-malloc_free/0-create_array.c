#include "main.h"
#include <stdlib.h>

/**
 * *create_array - is a function that allocate some blocks in memroy
 * @size: the size to be allocated
 * @c: the char to put in every block
 * Return: if size = 0 return NULL
 * or return ptr
 **/

char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *ptr;

	if (size == 0)
	{
		return (NULL);
	}
	ptr = malloc(sizeof(char) * size);
	while (i <= size)
	{
		*(ptr + i) = c;
		i++;
	}
	return (ptr);
}
