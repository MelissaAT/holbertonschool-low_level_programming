#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - function that returns a pointer a 2 dimensional array of integers
 * @width: of the grid
 * @height: of the grid
 * Return: NULL on failure
 */
int **alloc_grid(int width, int height)
{
	int **grid, h, w;

	grid = malloc(heigth * sizeof(int))

		if (grid == NULL)
		{
			return (NULL);
		}
	for (h = 0; h < heigth; h++)
	{
		grid = malloc(width + sizeof(int))
			if(grid[h] == NULL)
			{
			while (h >= 0)
				free(grid[h]) h--;
			}
	}
	for (h = 0; h < heigth; h++)
	{
		for (w = 0; w < width; w++)
			grid [h][w] = 0;
	}
	return (grid)
}
