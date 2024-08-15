#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - freee already allocated memory space
 * @grid: memory location
 * @height: number of row
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
