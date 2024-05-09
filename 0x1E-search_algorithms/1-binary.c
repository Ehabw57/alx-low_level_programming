#include "search_algos.h"
/**
  * print_array - Prints an array of ints
  * @array: Array of ints to print
  * @size: Size of the array
  */
void print_array(int *array, size_t size)
{
	size_t i = 0;

	if (array == NULL || size < 1)
		return;

	printf("Searching in array: %d", array[0]);
	for (i = 1; i < size; i++)
		printf(", %d", array[i]);
	printf("\n");
}
/**
  * binary_search - Finds an index of value in given array using bin_srch arlgo
  * @array: Array of ints to search for value in
  * @size: Number of elements in the array
  * @value: The value to search for in the array
  * Return: Index of value or -1 on failuer
  */
int binary_search(int *array, size_t size, int value)
{
	int i = 0;
	size_t start = 0;

	if (array == NULL || size < 1)
	return (-1);

	while (size > start)
	{
		i = (start + size) / 2;
		print_array(array + start, (size - start));

		if (array[i] > value)
			size = i;
		else if (array[i] < value)
			start = i + 1;
		else
			return (i);
	}

	return (-1);
}
