#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - this frees memory of structure dogs.
 * @d: pointer of structure to dog
 *
 * Return: On success 1.
 * On error, -1 is returned
 */

void free_dog(dog_t *d)
{
	if (d != 0)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
