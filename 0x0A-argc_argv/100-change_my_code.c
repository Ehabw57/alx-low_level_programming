
#include <stdio.h>
#include <stdlib.h>

/**
* main -  is a func that caculates amount of cents you need to give back
* @argc: is the number of arg enterd
* @argv: is  the omount of cents u mant to give back
* Return: 1  if c is bigeecoins  ocoins less than 2
**/
int main(int argc, char *argv[])
{
int coins, counter;

coins = atoi(argv[1]);
if (argc != 2)
{
printf("Error\n");
return (1);
}
if (coins <= 0)
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
