#include "lists.h"
/**
 * listint_len - returns the number of elements in a linked list
 * @h: parameter
 * Return: all the elements
 */
size_t listint_len(const listint_t *h)
{
	int len = 0;

	while (h != NULL)
	{
		len++;
		h = h->next;
	}
	return (len);
}
