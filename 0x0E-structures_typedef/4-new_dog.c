#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * new_dog - is a function that creates a new dog
 * @name: is a pointer to name
 * @age: is a pointer to age
 * @owner: is a pointer owner
 *
 * Return: pointer to new_dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{

	int x = 0, y = 0, p;
	dog_t *dogo;

	while (name[x] != '\0')
		x++;
	while (owner[y] != '\0')
		y++;

	dogo = malloc(sizeof(dog_t));
	if (dogo == NULL)
	{
		free(dogo);
		return (NULL);
	}
	dogo->name = malloc(x * sizeof(dogo->name));
	if (dogo->name == NULL)
	{
		free(dogo->name);
		free(dogo);
		return (NULL);
	}
	for (p = 0; p <= x; p++)
		dogo->name[p] = name[p];
	dogo->age = age;
	dogo->owner = malloc(y * sizeof(dogo->owner));
	if (dogo->owner == NULL)
	{
		free(dogo->owner);
		free(dogo->name);
		free(dogo);
		return (NULL);
	}
	for (p = 0; p <= y; p++)
		dogo->owner[p] = owner[p];
	return (dogo);
}
