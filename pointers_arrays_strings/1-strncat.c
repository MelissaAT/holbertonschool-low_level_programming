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
	char j = *dest;
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[j + i] = src[i];
		dest[j + i] = '\0';
	}
	return (dest);
}
