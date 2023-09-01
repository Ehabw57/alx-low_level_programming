#include "main.h"
/**
 * set_bit - set a bit a index to 1
 * @n: the num to set
 * @index: the index to reach to
 * Return: the value of bit
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int r = (*n >> index);

	if (index > 64)
		return (-1);
	*n = (*n >> index);
	*n = (*n | 1);
	*n = (*n << index);

	return (r & 1);
}
