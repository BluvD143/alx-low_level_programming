#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - this deletes the head node of a list
 * @head: is the pointer to the start of the list
 *
 * Return: the head node’s data (n)
 */

int pop_listint(listint_t **head)
{
  listint_t *rice;
	int garri;

	if (*head == NULL)
		return (0);

	rice = *head;
	garri = (*head)->n;
	*head = (*head)->next;

	free(rice);

	return (garri);
}
