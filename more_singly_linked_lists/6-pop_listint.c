#include "lists.h"
/**
* pop_listint - that deletes the head node of a listint_t linked list
* @head: variable pointer to pointer
* Return: the head node’s data (n)
*/

int pop_listint(listint_t **head)
{
	listint_t *i, *j;
	int tmp;

	if (*head == NULL)
		return (0);

	else
	{
		j = *head;
		i = (*head)->next;
		tmp = (*head)->n;
		free(j);
		*head = i;
	}
	return (tmp);
}
