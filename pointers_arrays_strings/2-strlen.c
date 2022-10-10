#include "main.h"
/**
 * _strlen - returns the lenght of a string
 * @s: variable
 * Return: i
 */
int _strlen(char *s)
{
	int i;

	while (*s++)
		i++;
	return (i);
}
