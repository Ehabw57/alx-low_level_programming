#include "main.h"
/**
 * set_bit - set a index of bit to 1
 * @n: the num to set
 * @index: the index to reach to
 * Return: the value of bit
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(unsigned long int) * 8)
		return (-1);
	*n = ((1 << index) | (*n));
	return (1);
}
