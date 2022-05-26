#include "lists.h"
#include <stdio.h>

/**
 * listint_len - this returns the number of elements of a listint_t list
 * @h: is the pointer to the head
 *
 * Return: number of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t rice = 0;

	while (h)
	{
		h = h->next;
		rice++;
	}
	return (rice);
}
