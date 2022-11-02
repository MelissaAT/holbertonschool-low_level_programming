#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - print numbers
 * @separator: string to be printed
 * @n: fixed parameter
 * Return: nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int num = 0;

	va_list ap;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		num += va_arg(ap, int);

		printf("%d", num);

		if (separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
}




