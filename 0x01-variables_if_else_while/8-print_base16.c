#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - is a function that prints digits
 * from 1 to 9 followed by  alphaber characters from a to f
 * Return: 0 (success)
 */
int main(void)
{
	int n = '0';
	int z = '9';
	char a = 'a';
	char f = 'f';

	while (n <= z)
{
	putchar(n);
	n++;
}
while (a <= f)
{
	putchar(a);
	a++;
}
putchar('\n');

return (0);
}
