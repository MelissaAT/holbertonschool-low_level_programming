#include "lists.h"
/**
 * free_listsint2 - frees a list
 * @head: pointer to pointer
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head != NULL)
	{
		temp = *head;
		while (temp)
		{
			temp = temp->next;
			free(*head);
			*head = temp;
		}
		head = NULL;
	}
}
