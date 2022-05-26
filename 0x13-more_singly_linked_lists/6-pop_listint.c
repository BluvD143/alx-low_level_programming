#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - this eletes the head node of a listint_t list.
 * @head: this is the pointer to the address of the head of the listint_t list.
 *
 * Return: If the linked list is empty - 0.
 *         Otherwise - The head node's data (n).
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
