#include "main.h"

/**
 * print_array - is a function that prints n numbers of array
 * @a: the array
 * @n: number to print
 **/
void print_array(int *a, int n)
{
	int c;

	for (c = 0; c < n ; c++)
	{
		if (c == 0)
			printf("%d", a[c]);
		else
			printf(", %d", a[c]);
	}
}
