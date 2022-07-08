#include "lists.h"

/**
 * sum_dlistint - this sum of all node data of a dlistint_t linked list
 * @head: this is a pointer to the head of a dlistint_t list.
 * Return: sum of node data
 */

int sum_dlistint(dlistint_t *head)
{
	size_t res = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		res += head->n;
		head = head->next;
	}
	return (res);
}
