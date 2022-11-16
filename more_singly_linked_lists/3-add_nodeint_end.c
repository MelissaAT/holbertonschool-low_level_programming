#include "lists.h"
/**
 * add_nodeint_end - adds node st the end
 * @head: double pointer
 * @n: int
 * Return: Succes
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp, *last;

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
		last = last->next;
	last->next = temp;
	return (temp);
}
