#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - is a function that prints numbers form 0 to 9
 * Return: 0 (success)
 */
int main(void)
{
	int n = 0;
	int z = 10;

	while (n != z)
{
	putchar(n + '0');
	n++;
}
putchar('\n');

return (0);
}