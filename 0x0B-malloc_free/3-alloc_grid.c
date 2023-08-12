#include "main.h"
#include <stdio.h>
#include <stdlib.h>

int **alloc_grid(int width, int height)
{
    int **ptr;
    int i, j;

    if (width < 1 || height < 1)
        return (NULL);

    ptr = malloc(sizeof(int *) * height);

    if (ptr == NULL)
        return (NULL);

    for (i = 0; i < height; i++)
    {
        ptr[i] = calloc(sizeof(int ), width);

        if (ptr[i] == NULL)
        {
            for (j = 0; j < i; j++)
            free(ptr[j]);
            free(ptr);
            return NULL;
        }
    }
       return (ptr);
}
