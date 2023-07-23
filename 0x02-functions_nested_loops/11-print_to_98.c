#include "main.h"

/**
 * print_to_98 - is a function that prints every min of the day
 * @n: the first num to add
 **/
void print_to_98(int n)
{
	int o = 98;

	if (n >= 98)
	{
		for (o = 98; n > o; n--)
		{
			printf("%d, ",n);
		}
	}
		if (n <= 98)
		{
			for (o = 98; n < o; n++)
			{
				printf("%d, ",n);
			}
		}
		printf("%d\n", o);
}
