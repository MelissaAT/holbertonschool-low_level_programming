#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - functions that allocate memory using malloc
 * @b: parameter
 */
void *malloc_checked(unsigned int b)
{
	char *a;
	
	a = malloc(b * sizeof(char));
	
	if (a == NULL)
	{
		exit(98);
	}
	else
	{
		return (a);
	}
}
