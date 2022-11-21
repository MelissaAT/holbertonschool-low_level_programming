#include "lists.h"
/**
 * add_dnodeint - adds node at the begining
 * @head: doble pointer
 * @n: int
 * Return: new node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *temp;

	temp = malloc(sizeof(dlistint_t));

	if (temp == NULL)
	{
		free(temp);
		return (NULL);
	}
	temp->n = n;
	temp->next = *head;
	*head = temp;
	if (*head != NULL)
	{
		(*head)->prev = temp;
	}
	*head = temp;
	return (temp);
}
