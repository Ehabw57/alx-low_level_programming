#include "main.h"
#include <stdlib.h>
/**
 * free_grid - free a2d gird
 * @grid: the pointer to grid to be freed
 * @height: the grid num of rows
 */
void free_grid(int **grid, int height)
{
int i;

for (i = 0; i < height; i++)
{
	free(grid[i]);
}
free(grid);
}
