#include "main.h"
/**
 * _strlen - returns the lenght of a string
 * @s: variable
 * Return: i
 */
int _strlen(char *s)
{
	int len;

	while (s[len] != '\0')
	{
		len++;
	}
	return (len);
}
