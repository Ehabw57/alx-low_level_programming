#include <stdio.h>
#include <stdlib.h>
/**
 * main - the function should multi tow passed arg
 * @c: the counter of  arg
 * @s: the argv string
 * Return: always 0
 */
int main(int c, char *s[])
{
c -= 1;
if (c != 2)
{
printf("Error\n");
}
else
{
printf("%i\n", atoi(s[1]) * atoi(s[2]));
}
return (0);
}
