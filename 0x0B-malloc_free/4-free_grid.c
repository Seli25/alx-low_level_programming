#include "main.h"

/**
 * free_grid - Function to free a 2D grind
 *
 * @grid: takes in width of grid
 * @height: height of grid
 *
 * Return: returns new grid
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
