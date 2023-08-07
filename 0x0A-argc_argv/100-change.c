#include <stdio.h>
#include <stdlib.h>

/**
 * main - Calculates the minimum number of coins required to make change for an amount of money.
 * @argc: The number of command-line arguments.
 * @argv: The array of command-line arguments.
 * Return: 0 on success, 1 on error.
 */
int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        printf("Error: Incorrect number of arguments\n");
        return 1;
    }

    int cents = atoi(argv[1]);

    if (cents <= 0)
    {
        printf("Error: Invalid amount\n");
        return 1;
    }

    int coins[] = {25, 10, 5, 2, 1};
    int numCoins = sizeof(coins) / sizeof(coins[0]);
    int count = 0;

    for (int i = 0; i < numCoins; i++)
    {
        count += cents / coins[i];
        cents %= coins[i];
    }

    printf("%d\n", count);

    return 0;
}