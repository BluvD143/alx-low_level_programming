#include "lists.h"

/**
 * list_len - this returns number of elements in a list_t list
 * @h: the list to be used
 *
 * Return: the number of elements in list
 */

size_t list_len(const list_t *h)
{
	const list_t *l = h;
	size_t rice = 0;

	while (l != NULL)
	{
		rice++;
		l = l->next;
	}
	return (rice);
}
