#include "main.h"

/**
* times_table - is a function that prints every min of the day
**/
void times_table(void)
{
int r, c, v;

for (r = 0; r <= 9; r++)
{
_putchar('0');
for (c = 1; c <= 9; c++)
{
v = r * c;
_putchar(',');
_putchar(' ');
if (r * c < 10)
{
_putchar(' ');
_putchar(v + '0');
}
else
{
_putchar(v / 10 + '0');
_putchar(v % 10 + '0');
}
}
_putchar('\n');
}
}
