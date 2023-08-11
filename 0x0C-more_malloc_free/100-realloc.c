#include "main.h"
#include <stdlib.h>
/**
 * *_memcpy - this copy  some text in the memory block to another blick
 *@dest: the member to copy to
 *@src: the mrmrber to copu from
 *@n: the times to print
 *Return: always return dest
 **/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);
}
/**
 * *_realloc - is a func that reallocates a memory block using malloc and free
 * @old_size: is the old allocated size
 * @new_size: is the new size to be allocated
 * @ptr: the pointer to allocte memory for
 * Return: ptr uassally
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *ptr2;

	if (ptr == NULL)
	{
		ptr = malloc(new_size);
		return (ptr);
	}
	if (old_size == new_size)
	{
		return (ptr);
	}

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

		ptr2 = malloc(sizeof(char) * new_size);
		_memcpy(ptr2, ptr, old_size);
		free(ptr);
		return (ptr2);

}
