#include "main.h"

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
