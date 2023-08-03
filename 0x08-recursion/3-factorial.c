#include "main.h"

/**
 * factorial - is a function that cacluates the factoraial of a given int
 * @n: the int to caclulate
 * Return: if n < 0 return -1 if n = 0 return n
 **/
int factorial(int n)
{
	int r;

	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		n = 1;
		return (n);
	}
	r = factorial(n - 1) * n;

	return (r);
}
