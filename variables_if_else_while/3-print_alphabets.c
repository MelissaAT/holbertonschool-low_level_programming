#include <stdio.h>

/**
 * main -Entry point
 * Return: Always 0 (Succes)
 */

int main(void)
{
	char abc;
	

	for (abc = 'a' ; abc <= 'z' ; abc++)
       for (abc = 'A' ; abc <= 'Z' ; abc++)
	putchar(abc);
	putchar('\n');

	return (0);
}
