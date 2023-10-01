#include <stdio.h>
int main(void)
{
    int i = 1;

    while (i <= 100)
    {
        if (i % 3 == 0)
            printf("Fizz");
        if (i % 5 == 0)
            printf("Buzz");
        if (i % 5 && i % 3)
            printf("%d", i);
        printf(" ");
        i++;
    }
    printf("\n");
    return (0);
}
