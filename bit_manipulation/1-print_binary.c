#include "main.h"
/**
 * print_banary - prints de binary representation of a number
 * @n: number
 */
void print_binary(unsigned long int n)
{
	unsigned int i;

	if (n > 1)
		print_binary(n >> 1);
	_putchar((n & 1) + '0');
}

