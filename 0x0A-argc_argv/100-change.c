#include <stdio.h>
#include <stdlib.h>

/**
* main - calculates the minimum number of coins required to make change
* @argc: the number of arguments entered
* @argv: the amount of cents you want to give back
* Return: 1 if argc is not 2, 0 if coins is negative, otherwise 0
*/
int main(int argc, char *argv[])
{
int counter = 0;
int coins;
if (argc != 2)
{
printf("Error\n");
return (1);
}

coins = atoi(argv[1]);

if (coins < 0)
{
printf("0\n");
return (0);
}



while (coins > 0)
{
if (coins >= 25)
coins -= 25;
else if (coins >= 10)
coins -= 10;
else if (coins >= 5)
coins -= 5;
else if (coins >= 2)
coins -= 2;
else
coins -= 1;

counter++;
}

printf("%i\n", counter);

return (0);
}
