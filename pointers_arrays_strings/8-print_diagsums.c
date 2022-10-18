#include <stdio.h>
#include "main.h"
/**
 * print_diagsums - prints the sum of the two diagonals of a square
 * @a: variable
 * @size: variable
 */
void print_diagsums(int *a, int size)
{
	int i, j, l;
	for (i = 0; i < size; i++)
	{
		j += *(a + (i * size + i));
		l += *(a + (i * size + (size - i - 1)));
	}
	printf("%d, %d\n", j, l);
}
