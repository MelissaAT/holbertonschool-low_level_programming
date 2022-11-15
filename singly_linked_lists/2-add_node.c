#include "lists.h"
/**
 * add_node - adds node at the begining
 * @head: doble pointer
 * @str: string
 * Return: new node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *temp;

	temp = malloc(sizeof(list_t));
	if (temp == NULL)
	{
		return (NULL);
	}
	temp->str = strdup(str);
	temp->len = strlen(str);
	temp->next = *head;

	*head = temp;
	return (temp);
}	
