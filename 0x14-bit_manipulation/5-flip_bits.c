#include "main.h"
/**
 * flip_bits - cool functtion describtion
 * @n: first num
 * @m: sec num
 * Return: Number of bits changed
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int count = 0;

	if ((n ^ m) != 0)
	{
		if ((n ^ m) & 1)
			count++;

		count += flip_bits((n >> 1), (m >> 1));
	}
	return (count);
}
