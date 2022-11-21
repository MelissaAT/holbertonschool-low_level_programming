#include "lists.h"
/**
 * print_distint - prints all elemnts os a list
 * @h: pointer
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t i = 0;
	distint_t *j;

	for (j = h; j != NULL; j->next)
	{
		printf("d\n", j->n);
	}
	return (i);
}
