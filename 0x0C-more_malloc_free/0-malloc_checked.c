#include "main.h"
#include <stdlib.h>

/**
 * *malloc_checked - this func allocates memory using malloc.
 * @b: the amount of memory to be allocated
 * Return: always ptr
**/
void *malloc_checked(unsigned int b)
{
void *ptr;

ptr = malloc(b);
if (ptr == NULL)
{
	exit(98);
}
return (ptr);
}
