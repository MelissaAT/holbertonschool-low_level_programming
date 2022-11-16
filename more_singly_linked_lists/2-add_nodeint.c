#include "lists.h"
/**
 * add_nodeint - adds node at the begining
 * @head: doble pointer
 * @str: string
 * Return: new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *temp;

	temp = malloc(sizeof(listint_t));
	if (tem == NULL)
	{
		return (NULL);
	}
	temp->n = n;
	temp->next = *head
	*head = temp;

	return (temp);
}
