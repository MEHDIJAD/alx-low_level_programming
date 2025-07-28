#include "main.h"

void	_free(void **grid)
{
	int i = 0;

	while (grid[i]){
		free(grid[i]);
		grid[i] = NULL;
		i++;
	}
	free(grid);
}
