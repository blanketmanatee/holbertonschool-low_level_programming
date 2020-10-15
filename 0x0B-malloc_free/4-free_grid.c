#include "holberton.h"

/**
 * free_grid - free array from previous task
 * @grid: array
 * @height: rows of array
 *
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
