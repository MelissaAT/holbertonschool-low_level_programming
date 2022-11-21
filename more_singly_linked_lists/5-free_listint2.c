#include "lists.h"
/**
 * free_listint2 - frees a list
 * @head: pointer to pointer
 */
void free_listint2(listsint_t **head)
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
