#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node to a list at a given position.
 * @head: A pointer to the address of the head of the list.
 * @idx: The index of the listint_t list where the new
 *       node should be added - indices start at 0.
 * @n: The integer for the new node to contain.
 *
 * Return: NULL if function fails Otherwise - the address of the new node.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *rice, *garri = *head;
	unsigned int node;

	rice = malloc(sizeof(listint_t));
	if (rice == NULL)
		return (NULL);

	rice->n = n;

	if (idx == 0)
	{
		rice->next = garri;
		*head = rice;
		return (rice);
	}

	for (node = 0; node < (idx - 1); node++)
	{
		if (garri == NULL || garri->next == NULL)
			return (NULL);

		garri = garri->next;
	}

	rice->next = garri->next;
	garri->next = rice;

	return (rice);
}
