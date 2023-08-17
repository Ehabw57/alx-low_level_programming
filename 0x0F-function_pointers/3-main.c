#include <stdio.h>
#include "3-calc.h"

/**
 * main - the main func
 * @argc: is number of commands
 * @argv: is arr of the comands
 * Return: Usuallay 0
 */

int main(int argc, char *argv[])
{
	int i, j, r;
	int (*ptr)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	i = atoi(argv[1]);
	j = atoi(argv[3]);

	if ((j == 0 || strcmp(argv[2], "%") == 0) && strcmp(argv[2], "/") == 0)
	{
		printf("Error\n");
		exit(100);
	}

	ptr = get_op_func(argv[2]);
	if (ptr == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	else
	{
		r = (ptr(i, j));
		printf("%d\n", r);
	}
	return (0);
}
