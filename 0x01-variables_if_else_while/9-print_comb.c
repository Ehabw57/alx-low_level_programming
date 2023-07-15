#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - is a function that prints numbers form 0 to 9
 * Return: 0 (success)
 */
int main(void)
{
	char n = '0';
	char z = '9';

	while (n <= z)
{
	putchar(n);
	putchar(',');
	putchar(' ');
	n++;
}
putchar('\n');

return (0);
}
