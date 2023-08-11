#include <stdlib.h>
#include "main.h"

/**
 * *_calloc - allocates size x nmemb memory block and set it to 0
 * @nmemb: size 1
 * @size: size 2
 * Return: NULL if func fails or ptr2 if succes
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i = 0;
	void *ptr;
	char *ptr2;

	if (size == 0 || nmemb == 0)
	{
		return (NULL);
	}
	ptr = malloc(size * nmemb);
	if (ptr == NULL)
	{
		return (NULL);
	}
	ptr2  = (char *) ptr;
	while (i < size * nmemb)
	{
		ptr2[i] = '\0';
		i++;
	}
	return (ptr2);
}
