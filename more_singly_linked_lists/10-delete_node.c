#include "lists.h"
/**
 * delete_nodeint_at_index - delets a node at index
 * @head: doible pointer
 * @index: index of the node that should be deleted
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *deletenode;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);
	temp = *head;

	while (temp != NULL && i < (index - 1))
	{
		temp - temp->next;
		i++;
	}
	deletenode = temp->next;
	temp->next = deletenode->next;
	free(deletenode);
	return(1);
}
