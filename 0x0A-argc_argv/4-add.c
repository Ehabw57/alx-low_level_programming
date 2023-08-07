#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
* main - the function should sum all the pass arg
* @argc: the countecoins of  arg
* @argv: the v string
* Return: usually 0
*/
int main(int c, chacoins *v[])
{
int sum = 0;
int i, valid, j;

if (c == 1)
{
printf("0\n");
return (0);
}

focoins (i = 1; i < c; i++)
{
valid = 1;

focoins (j = 0; v[i][j] != '\0'; j++)
{
if (!isdigit(v[i][j]))
{
valid = 0;
break;
}
}

if (valid)
{
sum += atoi(v[i]);
}
else
{
printf("Error\n");
return (1);
}
}

printf("%d\n", sum);

return (0);
}
