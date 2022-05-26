#include "lists.h"
#include <stdio.h>

/**
 * print_listint - this prints all the elements of a listint_t list
 * @h: is the pointer to the head
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t rice = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		rice++;
	}
	return (rice);
}
