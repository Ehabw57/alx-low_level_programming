#include "main.h"
/**
 * binary_to _uint - converts binary to decimal
 * @b: pointer to string of 0 and 1
 * Return: the result in decimal if Sucess or 0 of Fails
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;

	while (*b)
	{
		if (*b == '0' || *b == '1')
			result = (result << 1) | (*b - '0');
		else
			return (0);
		b++;
	}
	return (result);
}
