#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - is a function that prints a alphaber characters except e and q
 * Return: 0 (success)
 */
int main(void)
{
	int n = 97;
	int z = 123;
	int e = 101;
	int q = 113;

	while (n != z)
{
	if (n != e && n != q)
	{
		putchar(n);
	}
	n++;
}
putchar('\n');

return (0);
}
