#include "main.h"
/**
 * print_line - draws a strigth line
 */
void print_line(int n)
{
	int m;

	if (n > 0)
	{
		for (m = 0; m < n; m++)
			_putchar('_');
	}

	_putchar('\n');

}
