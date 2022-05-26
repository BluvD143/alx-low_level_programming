#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - this frees the memory of a list
 * @head: is the pointer to the start of the list
 * Return: void
 */
void free_listint(listint_t *head)
{
  listint_t *rice;

	while (head)
	{
		rice = head->next;
		free(head);
		head = rice;
	}
}
