#include "main.h"
/**
 * _abst - is a function that computes the absolute value of an integer.
 * @n: is a parameter that recives a value from main funciton
 * Return: ussally (0)
 */

int _abs(int n)
{
	if (n < 0)
	{
		return (-n);
	}
	else
	{
		return (n);
	}
}
