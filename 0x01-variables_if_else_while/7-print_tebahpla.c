#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - is a function that prints a alphaber characters revetsed
 * Return: 0 (success)
 */
int main(void)
{
	int n = 122;
	int z = 96;

	while (n != z)
{
	putchar(n);
	n--;
}
putchar('\n');

return (0);
}
