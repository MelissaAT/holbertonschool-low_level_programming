#include "lists.h"
#include <stddef.h>
#include <stdio.h>
/**
 * print_list - prints elements of a list
 * @h: parameter
 * Return: the numbers of the node
 */
size_t print_list(const list_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		printf("[%d] ", h->len);
		i++;
	if (h->str == NULL)
	{
		printf("(nil)\n");
	}
	else
	{
		printf("%s\n", h->str);
	}
		h = h->next;
	}
	return (i);
}
