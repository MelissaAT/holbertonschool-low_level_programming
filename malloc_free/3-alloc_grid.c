#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - function that returns a pointer a
 * 2 dimensional array of integers
 * @width: of the grid
 * @height: of the grid
 * Return: NULL on failure
 */
int **alloc_grid(int width, int height)
{
	int a, b;
	int **c;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	c = malloc(height * sizeof(int *));

		if (grid == NULL)
		{
			return (NULL);
		}

	for (a = 0; a < height; a++)
	{
		c[a] = malloc(width + sizeof(int));

			if (c[a] == NULL)
			{
				while (a >= 0)
				{
					free(c[a]);
					a--;
				}
			}
			free(c);
			return (NULL);
	}
	for (a = 0; a < height; a++)
	{
		for (b = 0; b < width; b++)
		{
			c[a][b] = 0;
		}
	}
	return (c);
}
