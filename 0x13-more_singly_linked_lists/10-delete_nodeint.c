#include "lists.h"
#include <stdlib.h>
/**
 * delete_nodeint_at_index - is a function that delets a node at a given index
 * @head: is the pointer to the address of the head of the list
 * @index: is the index of the node to be deleted
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *rice, *garri = *head;
	unsigned int node;

	if (garri == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(garri);
		return (1);
	}

	for (node = 0; node < (index - 1); node++)
	{
		if (garri->next == NULL)
			return (-1);

		garri = garri->next;
	}

	rice = garri->next;
	garri->next = rice->next;
	free(rice);
	return (1);
}
