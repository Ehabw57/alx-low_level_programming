#include "function_pointers.h"

/**
 * print_name - afuncton that calls another fun throgu pointer
 * @name: the para to handel to the called fun
 * @f: the pointer to the func
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
