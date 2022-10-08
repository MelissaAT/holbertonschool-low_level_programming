#include "main.h"
/**
 * print_square - prints a square
 * @size: Vriable
 */
void print_square(int size)
{
	int i, j;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < i; j++)
				_putchar('#');

				if (i < size)
					_putchar('\n');
			}
	}
	_putchar('\n');
}
