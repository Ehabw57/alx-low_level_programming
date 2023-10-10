#include "main.h"
/**
 * clear_bit - set a spacifc index bit to 0
 * @n: pointer to intger
 * @index: the index to set for
 * Return: -1 if fails 1 if success
*/
int clear_bit(unsigned long int *n, unsigned int index)
{

	if (index > sizeof(unsigned long int) * 8)
		return (-1);

	*n = (*n & ~(1 << index));
	return (1);
}
