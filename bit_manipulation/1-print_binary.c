#include "main.h"
/**
 * print_banary - prints de binary representation of a number
 * @n: number
 */
void print_binary(unsigned long int n)
{
	unsigned int i;

	for (i = 1 << 31; i > 0; i = i >> 2)
		(n & i) ? printf("1") : printf("0");
}

