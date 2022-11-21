#include "lists.h"
/**
 * add_dnodeint_end - function that adds a new node at the end
 * @head: double pointer
 * @n: parameter
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *temp, *last;

	temp = malloc(sizeof(listint_t));

	if (temp == NULL)
	{
		return (NULL);
	}
	temp->n = n;
	temp->next = NULL;

	if (*head == NULL)
	{
		*head = temp;
		return (temp);
	}
	last = *head;

	while (last->next != NULL)
	{
		last = last->next;
	}
	last->next = temp;
	temp->prev = last;

	return (temp);
}
	