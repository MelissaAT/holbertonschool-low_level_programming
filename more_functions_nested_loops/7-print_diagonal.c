#include "main.h"
/**
 * print_diagonal - draws a diagonal lin
 */
void print_diagonal(int n)
{	
	int s, d;
	

	if (n <= 0)
	{
		for (d = 0; d < n; d++)
		_putchar('\n');
	}
	else
	for (d = 0; d < n; d++)
	{ 
		for (s = 0; s < n; s++)
		{_putchar(32);
                _putchar(92);

	}
	}

	_putchar('\n');
}
