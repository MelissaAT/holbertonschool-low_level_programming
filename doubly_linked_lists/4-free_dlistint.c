#include "lists.h"
/**
 * free_dlistint - frees a list
 * @head: pointer
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;
	
	while (head != NULL)
	{
		temp = head;
		head = temp->next;
		free(temp);
	}
}
