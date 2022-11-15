#include "lists.h"
/**
 * add_node - adds node at the begining
 * @head: doble pointer
 * @str: string
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *temp;

	temp = malloc(sizeof(list_t));
	temp->str = strdup(str);
	temp->len = strlen(str);
	temp->next = *head;
	if (temp == NULL)
	{
		return (NULL);
	}
	*head = temp;
	return (temp);
}

	
