#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * **alloc_grid - allociting memory for a 2d arr wirh 0
 * @width: the num of columns
 * @height: the num of rows
 * Return: NUll if fails, ptr if succss
 */
int **alloc_grid(int width, int height)
{
	int **ptr;
	int i, j;

	if (width < 1 || height < 1)
	{
		return (NULL);
	}

	ptr = malloc(sizeof(int *) * height);
	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		ptr[i] = calloc(sizeof(int), width);
		if (ptr[i] == NULL)
		{
			free(ptr);

			for (j = 0; j < i; j++)
			{
				free(ptr[j]);
			}
			return (NULL);
		}
	}
	return (ptr);
}
