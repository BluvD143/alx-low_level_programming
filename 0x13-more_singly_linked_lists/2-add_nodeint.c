#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * add_nodeint - this adds a new node at the start of a listint_t list
 * @n: is the new node to be added
 * @head: this is the pointer to the address of the list
 *
 * Return: the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *rice;

	rice = malloc(sizeof(listint_t));
	if (rice == NULL)
		return (NULL);

	rice->n = n;
	rice->next = *head;
	*head = rice;

	return (*head);
}
