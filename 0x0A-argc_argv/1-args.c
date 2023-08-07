#include <stdio.h>

/**
* main - the function should print the num of arg
* that has been passed to it
* @c: the counter of  arg
* @s: the arh strings
* Return: always 0
*/
int main(int c, char *s[])
{
(void)s;
printf("%i\n", c - 1);
return (0);
}
