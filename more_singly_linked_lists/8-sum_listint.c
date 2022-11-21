#include "lists.h"
/**
 * sum_listint - function that returns the sum of all data(n)
 * of a linked list
 * @head) head pointer
 * Return: if the list is empty return 0
 */
int sum_listint(listint_t *head)
{
	int i = 0;

	while (head)
	{
		i = i + head->n;
		head = head->next;
	}
	return (i);
}
