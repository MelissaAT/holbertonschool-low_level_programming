#include "main.h"
#include <stdlib.h>
/**
 * _calloc - allocates memory for a array
 * @nmemb: elements of size
 * @size: parameter
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int i = 0, l = 0;
	char *a;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	a = malloc((nmemb * size) * sizeof(char));

	if (a == NULL)
	{
		return (NULL);
	}

	while (i < l)
	{
		a[i] = 0;
		i++;
	}
	return (a);
}

