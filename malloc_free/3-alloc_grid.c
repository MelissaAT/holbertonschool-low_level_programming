#include "main.h"
#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>
/**
 * alloc_grid - function that returns a pointer a
 * 2 dimensional array of integers
 * @width: of the grid
 * @height: of the grid
 * Return: NULL on failure
 */
int **alloc_grid(int width, int height)
{
	int a, b, d, e;
	int **c;

	if (width <= 0 || height <= 0)
		return (NULL);

	c = malloc(sizeof(int *) * height);

		if (c == NULL)
		{
			free(c);
			return (NULL);
		}

	for (a = 0; a < height; a++)
	{
		c[a] = malloc(sizeof(int) * width);

			if (c[a] == NULL)
			{
				for (b = a; b >= 0; b--)
				{
					free(c[b]);
				}
			}
			free(c);
			return (NULL);
	}
	for (d = 0; d < height; d++)
	{
		for (e = 0; e < width; e++)
		{
			c[d][e] = 0;
		}
	}
	return (c);
}
