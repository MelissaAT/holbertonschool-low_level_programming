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
	int **grid, a, b;

	if (width <= 0 || heigth <= 0)
	{
		return (NULL);
	}

	grid = malloc(heigth * sizeof(int *));

		if (grid == NULL)
		{
			return (NULL);
		}

	for (a = 0; a < heigth; a++)
	{
		grid[a] = malloc(width + sizeof(int));

			if (grid[a] == NULL)
			{
				while (a >= 0)
				{
					free(grid[a]);
					a--;
				}
			}
			free(grid);
			return (NULL);
	}
	for (a = 0; a < heigth; a++)
	{
		for (b = 0; b < width; b++)
		{
			grid[a][b] = 0;
		}
	}
	return (grid);
}
