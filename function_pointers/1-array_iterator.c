#include "function_pointers.h"
#include <stddef.h>
/**
 * array_iterrator -function that executes a function given
 *  as a parameter on each element of an array.
 *  @array - pointer
 *  @size_t size: size of the array
 *  @action: pointer to function
 *  Return: {}
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{

	if (array != NULL || action != NULL)
	{
	}
	if (size > 0)
	{
		size++;
	}
	action(*array);
	array++;
}
