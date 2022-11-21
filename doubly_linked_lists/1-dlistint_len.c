#include "lists.h"
/**
 * dlistint_len - function that returns the number of elments
 * @h: pointer
 * Return: the number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t len = 0;

	while (h != NULL)
	{
		len++;
		h = h->next;
	}
	return (len);
}

