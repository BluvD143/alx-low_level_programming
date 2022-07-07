#include "lists.h"

/**
 * free_dlistint - this function frees a doubly linked list
 * @head: this is the double pointer to head
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp = head;
	dlistint_t *current = head;

	while (temp)
	{
		temp = temp->next;
		free(current);
		current = temp;
	}
}
