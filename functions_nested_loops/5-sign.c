#include "main.h"

/**
 * print_sign - prints the sing of a number
 *
 * n: variable
 * Return: 1 prints + if n is greater than zero, 0  prints 0 if n is zero
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar ('+');
		return (1);

	}

	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar ('-');
		return (-1);
	}
}
