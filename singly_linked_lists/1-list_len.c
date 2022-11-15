#include "lists.h"
/**
 * list_len - returns the number of elements in a linked list
 * @h: parameter
 * Return: all the elements
 */
size_t list_len(const list_t *h)
{
	int len = 0;

	while (h != NULL)
	{
		len++;
		h = h->next;
	}
	return (len);
}

