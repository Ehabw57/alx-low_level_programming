
#include <stdio.h>
#include <stdlib.h>

/**
* main -  is a func that caculates amount of cents you need to give back
* @c: is argc
* @v: is argv
* Return: 1  if c is bigeer  or less than 2
**/
int main(int c, char *v[])
{
int r, counter;

if (c != 2)
{
printf("Error\n");
return (1);
}
r = atoi(v[1]);
if (r < 1)
{
printf("0\n");
}
counter = 0;

while (r > 0)
{
if (r >= 25)
{
r -= 25;
}
else if (r >= 10)
{
r -= 10;
}
else if (r >= 5)
{
r -= 5;
}
else if (r >= 2)
{
r -= 2;
}
else
{
r -= 1;
}
counter++;
}
printf("%i\n", counter);
return (0);
}
