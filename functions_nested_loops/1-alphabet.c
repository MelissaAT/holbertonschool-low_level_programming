#include "main.h"

/**
 * print_alphabet - prints the alphabet lower case
 *
 * Return: Always lower case letters
 */
void print_alphabet(void)
{
	int abc;

	for (abc = 'a'; abc <= 'z'; abc++)

		_putchar(abc);
	_putchar('\n');

}
