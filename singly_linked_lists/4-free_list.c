#include "lists_t"
/**
 * free_list - frees a list
 * @head: begining of the node
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp->str);
		free(temp);
	}
}
