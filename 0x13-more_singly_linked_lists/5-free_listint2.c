#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - frees the memory of a list
 * @head: is the pointer to the address of the list
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *rice;
	
	if (head == NULL)
		return;

	while (*head)
	{
		rice = (*head)->next;
		free(*head);
		*head = rice;
	}
	
	head = NULL;
}
