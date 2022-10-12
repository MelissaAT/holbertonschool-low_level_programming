#include "main.h"
/**
 * _strncat - concatenates two strings using a number of bytes.
 * @dest: destination
 * @src: source
 * @n: variable
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
		i++;
	for (i = 0; src[i] && i < n; i++)
		dest[j] = src[i];
	return (dest);
}
