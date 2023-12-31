#include "main.h"

/**
* print_times_table - is a function that prints the full times table of n
* @n: the variable to print its time table
* Return: 0 if n is greater than 15 or less than 0
**/

void print_times_table(int n)
{
int i, j, r;

if (n > 15 || n < 0)
{
return;
}

for (i = 0; i <= n; i++)
{
printf("0");
for (j = 1; j <= n; j++)
{
r = i * j;
printf(", ");
if (r < 10)
{
printf("  ");
}
else if (r < 100)
{
printf(" ");
}
printf("%d", r);
}
printf("\n");
}
}
