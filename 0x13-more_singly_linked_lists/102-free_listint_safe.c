#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_listint_safe - is a function that frees a linked list
 * @h: pointer to the start of the list
 * Return: number of elements in the list
 */

size_t free_listint_safe(listint_t **h)
{
	listint_t *a;
	size_t size;
	int d;

	if (!h || !*h)
		return (0);
	while (*h)
	{
		d = *h - (*h)->next;
		if (d > 0)
		{
			a = (*h)->next;
			free(*h);
			*h = a;
			size++;
		}
		else
		{
			free(*h);
			*h = NULL;
			size++;
			break;
		}
	}
	*h = NULL;
	return (size);
}
