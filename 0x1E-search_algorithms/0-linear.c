#include "search_algos.h"
/**
 * linear_search - Using linear search algorithm finds a value in an array
 * @array: An array to search for value inside
 * @size: Size of the array
 * @value: The value u want to find
 * Return: Index of the founded value or -1 on faliuer
*/
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (array == NULL || size < 1)
		return (-1);
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
