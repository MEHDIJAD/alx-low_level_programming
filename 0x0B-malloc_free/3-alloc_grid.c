#include "main.h"

void	_bzero(int *line, size_t n)
{
	size_t i;

	i = 0;
	while (i < n)
		line[i++] = 0;
}

int **alloc_grid(int width, int height)
{
	int **grid;
	int y;

	if (!width || !height)
		return (NULL);
	grid = malloc(sizeof(int *) * height);
	if (!grid)
		return (NULL);
	y = 0;
	while (y < height)
	{
		grid[y] = malloc(sizeof(int) * width);
		if (!grid[y])
			_free((void *)grid);
		_bzero(grid[y], width);
		y++;
	}
	grid[y] = NULL;
	return (grid);
}
