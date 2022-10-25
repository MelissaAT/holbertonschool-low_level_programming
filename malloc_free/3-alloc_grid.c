#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - function that returns a pointer a
 * 2 dimensional array of integers
 * @width: of the grid
 * @heigth: of the grid
 * Return: NULL on failure
 */
int **alloc_grid(int width, int heigth)
{
	int **grid, h, w;

	if (width <= 0 || heigth <= 0)
	{
		return (NULL);
	}

	grid = malloc(heigth * sizeof(int *));

		if (grid == NULL)
		{
			return (NULL);
		}

	for (h = 0; h < heigth; h++)
	{
		grid[h] = malloc(width + sizeof(int));

			if (grid[h] == NULL)
			{
				while (h >= 0)
				{
					free(grid[h]);
					h--;
				}
			}
			free(grid);
			return (NULL);
	}
	for (h = 0; h < heigth; h++)
	{
		for (w = 0; w < width; w++)
		{
			grid[h][w] = 0;
		}
	}
	return (grid);
}
