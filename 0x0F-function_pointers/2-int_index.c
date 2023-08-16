#include "function_pointers.h"

/**
 * int_index - is a function that searches for an integer.
 * @array: an array of intgers.
 * @size: is the number of elements in the array.
 * @cmp: is a pointer to a fun that takes int as parameter and return nothing.
 * Return: the index of the NUM if SUCSESS or -1 if FAILS
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i, j;

	if (size <= 0)
		return (-1);

	if (array == NULL || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		j = cmp(array[i]);

		if (j == 1)
		{
			return (i);
		}

	}
	return (-1);
}
