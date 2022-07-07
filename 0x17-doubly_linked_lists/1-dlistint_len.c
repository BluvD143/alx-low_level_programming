#include "lists.h"

/**
 * dlistint_len - this function returns number of elements in a dlistint_t list
 * @h: this is the pointer to head node
 * Return: the number of elements
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
