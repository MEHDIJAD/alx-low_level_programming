#include "main.h"

void	_free_grid(void **grid, int height)
{
	int i = 0;

	while (i < height){
		free(grid[i]);
		grid[i] = NULL;
		i++;
	}
	free(grid);
}
