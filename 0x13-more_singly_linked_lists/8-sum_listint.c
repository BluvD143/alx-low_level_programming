#include "lists.h"
#include <stdlib.h>

/**
 * sum_listint - this calculates sum of all data (n) of a linked list
 * @head: his is a pointer to the head of a linked list
 *
 * Return: sum of data or 0 if list is empty
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *m = head;

	while (m != NULL)
	{
		sum += m->n;
		m = m->next;
	}
	return (sum);
}
