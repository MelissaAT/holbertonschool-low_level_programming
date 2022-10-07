#include "main.h"

/**
 * print_most_number - prints the numbers fron 0 to 9
 *
 */
void print_most_numbers(void);
{
	char n;

	for (n = 0; n <= 9; n++)
		if (n != 2 && n != 4)
			_putchar(n);
		_putchar('\n');
}
