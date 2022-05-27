#include "lists.h"

/**
 * find_listint_loop - this finds the loop in a linked list
 * @head: this is a pointer to the head of a linked list
 *
 * Return: address of the node where the loop starts,
 * or NULL if is no loop
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *width = head;
	listint_t *height = head;

	if (!head)
		return (NULL);

	while (width && height && height->next)
	{
		height = height->next->next;
		width = width->next;
		if (height == width)
		{
			width = head;
			while (width != height)
			{
				width = width->next;
				height = height->next;
			}
			return (height);
		}
	}
	return (NULL);
}
