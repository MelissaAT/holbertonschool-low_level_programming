#include "main.h"

/**
 * print_last_digit - print the last digit
 *
 * Return: the value of the last digit
 *
 */
int print_last_digit(int n)
{
	int b;
	
	b = (a % 10);

	if (b < 0)
	
	{
		b = (-1 * b);
	}
	_putchar(b + '0');

	return (b);
}
