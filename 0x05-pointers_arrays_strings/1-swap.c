#include "main.h"
/**
 * swap_int - is a function that return n to 98
 * @a: the first var to swap
 * @b: the sceond var to swap
 * **/
void swap_int(int *a, int *b)
{
	int arr[1];
       arr[0]= {*a};

	    *a = *b;
	    *b = arr[0];
}
