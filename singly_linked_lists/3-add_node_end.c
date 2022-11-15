#include "lists.h"
/**
 * add_node_end - adds node st the end
 * @head: double pointer
 * @str: string
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp = malloc(sizeof(list_t));
	list_t *last = *head;
	
	temp->str = strdup(str);
	temp->len = strlen(str);
	temp->next = NULL;

	if (*head == NULL)
	{
		*head = temp;
		return (NULL);
	}

	while (last->next != NULL)
	{
		last = last->next;
	}
	last->next = temp;
	return (temp);

}
