#include "main.h"
#include<stdlib.h>

/**
 * free_grid - frees a 2 dimensional grid previously
 *	created by your alloc_grid function
 * @grid: 2 dimensional grid to free
 * @height: height of the 2 dimensional grid
 *
 * Return: nothing.
 */

void free_grid(int **grid, int height)
{
	int j;

	for (j = 0; j < height; j++)
		free(grid[j]);
	free(grid);
}
