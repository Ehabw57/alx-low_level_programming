#include <stdio.h>
/**
 * main - the function should print all of its passed arg
 * folloed by a newline
 * @c: the counter of  arg
 * @s: the argv string
 * Return: always 0
*/
int main(int c, char *s[])
{
int i;
for (i = 0; i < c; i++)
printf("%s\n", s[i]);
return (0);
}
