#include "main.h"

/**
 * free_grid - Frees a 2D grid previously created by alloc_grid
 * @grid: Pointer to the 2D grid
 * @height: Number of rows in the grid
 */

void free_grid(int **grid, int height)
{
	int i = 0;

	while (i < height)
	{
		free(grid[i]);
		grid[i] = NULL;
		i++;
	}
	free(grid);
}
