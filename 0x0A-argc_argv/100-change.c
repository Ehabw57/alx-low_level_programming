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
int cents;
int coins[] = {25, 10, 5, 2, 1};
int numCoins = sizeof(coins) / sizeof(coins[0]);
int count = 0;
int i;
if (argc != 2)
{
printf("Error\n");
return (1);
}

cents = atoi(argv[1]);

if (cents <= 0)
{
printf("0\n");
return (0);
}

for (i = 0; i < numCoins; i++)
{
count = cents / coins[i] + count;
cents = coins[i] % cents;
}

printf("%d\n", count);

return (0);
}
