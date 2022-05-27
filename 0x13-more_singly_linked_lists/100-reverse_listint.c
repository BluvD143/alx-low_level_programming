#include "lists.h"

/**
 * reverse_listint - this reverses a listint_t linked list
 * @head: this is a pointer to head of the list
 *
 * Return: a pointer to the first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *m = NULL;
	listint_t *n = NULL;

	while (*head)
	{
		m = (*head)->next;
		(*head)->next = n;
		n = *head;
		*head = m;
	}
	*head = n;
	return (*head);
}
