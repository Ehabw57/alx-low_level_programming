#include "main.h"

/**
 * print_array - is a function that prints n numbers of array
 * @a: the array
 * @n: number to print
 **/
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n ; i++)
	{
		printf("%d\n", a[i]);
		putchar(',');
		putchar(' ');
}
