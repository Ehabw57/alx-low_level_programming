#include "main.h"
/**
 * swap_int - is a function that return n to 98
 * @a: the first var to swap
 * @b: the sceond var to swap
 * **/
void swap_int(int *a, int *b)
{
	int arr[] = {*a};

	    *a = *b;
	    *b = arr[0];
}
