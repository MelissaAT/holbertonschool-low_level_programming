#include "lists.h"
/**
 * get_nodeint_at_index - function that returns the nth node
 * of a lnked list
 * @head: head pointer
 * @index: index of the node starting at 0
 * Return: Null if the node doesnt exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp;
	unsigned int i = 0;

	if ( head != NULL)
	{
		temp = head;
	
		while (temp != NULL)
		{
			if (i == index)
				return (temp);
			temp = temp->next;
			i++;
		}
	}
	return (NULL);
}
