#include "main.h"
/**
 * print_diagonal - draws a diagonal line
 * @n: Variable
 */
void print_diagonal(int n)
{
	int d, s;

	if (n < 0)
	{
		_putchar('\n');
	}
	for (d = 0; d < n; d++)
	{
		for (s = 0; s < d; d++)
			if (s < d)
			_putchar(' ');
		_putchar("\\");
	}
	_putchar('\n');

}
