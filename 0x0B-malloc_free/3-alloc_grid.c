#include "main.h"

/**
 * _bzero - Sets a line of integers to zero
 * @line: Pointer to the line (array of integers)
 * @n: Number of elements in the line
 */

void	_bzero(int *line, size_t n)
{
	size_t i;

	i = 0;
	while (i < n)
	line[i++] = 0;
}

/**
 * alloc_grid - Allocates a 2D grid of integers
 * @width: Number of columns
 * @height: Number of rows
 *
 * Return: Pointer to the 2D grid, or NULL if memory allocation fails
 */

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
		{
			while (--y)
			{
				free(grid[y]);
			}
			free(grid);
		}
		_bzero(grid[y], width);
		y++;
	}
	grid[y] = NULL;
	return (grid);
}
