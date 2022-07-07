#include "lists.h"

/**
 * print_dlistint - this prints all elements of dlistint_t list
 * @h: the pointer to head node
 * Return: the number of elements
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
