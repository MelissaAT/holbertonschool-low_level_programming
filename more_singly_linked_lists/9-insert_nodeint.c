#include "main.h"
/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: double pointer
 * @idx: index of the list where the new node should be added
 * @n: parmeter
 * Return: the adrdress of the new node or Null if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp, *newnode;
	unsigned int i = 0;

	if (head == NULL && idx != 0)
		return (NULL);

	newnode = malloc(sizeof(listint_t));
	temp = *head;

	if (new_node == NULL)
		return (NULL);

	newnode->n = n;

	if (idx == 0)
	{
		newnode->next = *head;
		*head = newnode;
		return (newnode);
	}
	temp = *head;

	while (i < idx - 1)
	{
		temp = temp->next;
		if (temp == NULL)
		{
			free(newnode);
			return (NULL);
		}
		i++;
	}
	newnode->next = temp->next;
	temp->next = newnode;
	return (newnode);
	}
