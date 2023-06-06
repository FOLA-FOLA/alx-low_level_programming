#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid - This function frees up allocated
 * space to 2d grid by function **aloc_grid.
 *
 * @grid: This is the grid to be freed.
 * @height: THis is the height of the 2d grid.
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i += 1)
	{
		free(grid[i]);
	}
	free(grid);
}
