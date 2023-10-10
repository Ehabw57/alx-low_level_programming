#include "function_pointers.h"

/**
 * array_iterator - a func that calls other func throug pointer
 * @array: an array of intgers
 * @size: the size of the array
 * @action: a pointer to fun that takes int and return void
 *
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL || size < 1)
	return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
