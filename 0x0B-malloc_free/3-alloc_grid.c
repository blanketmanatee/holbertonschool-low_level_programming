#include "holberton.h"

/**
 * alloc_grid -alloc grid
 * @width: columns
 * @height: rows
 * Return: 2d array
 */

int **alloc_grid(int width, int height)
{

	int **j;
	int i, x, y;

	if (width <= 0 || height <= 0)
		return (NULL);
	m = (int **) malloc(height * sizeof(int *));
	if (j == NULL)
	{
		free(j);
		return (0);
	}
	for (i = 0; i < height; i++)
	{
		j[i] = (int *) malloc(width * sizeof(int));
		if (j[i] == NULL)
		{
			for (; i >= 0; i--)
				free(j[i]);
			free(j);
			return (0);
		}
	}
	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
		{
			j[x][y] = 0;
		}
	}
	return (j);
}
