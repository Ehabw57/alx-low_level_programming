#include "main.h"
/**
 * get_bit - return the value of spci bit in the memory
 * @n: the refenced number
 * @index: the index to return
 * Return: the  value of that bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 64)
		return (-1);
	n = (n >> index);
	return (n & 1);
}
