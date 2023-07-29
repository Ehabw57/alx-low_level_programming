#include "main.h"

/**
 * reverse_array - a function that compare  tow strings
 * @a: the firest string
 * @n: the sec string
 **/
void reverse_array(int *a, int n)
{
	int i, temp;

	for (i = 0; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = tem;
	}
}
