#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - is a function that prints a alphaber characters
 * Return: 0 (success)
 */
int main(void)
{
	int n = 97;
	int z = 123;
	int a = 65;
	int x = 90;

	while (n != z)
{
	putchar(n);
	n++;
}
while (a <= x)
{
	putchar(a);
	a++;
}
putchar('\n');

return (0);
}
