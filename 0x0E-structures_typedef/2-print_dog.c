#include "dog.h"
#include <stdio.h>

/**
 * print_dog - this is a function that prints a struct dog.
 * @d: is a pointer to struct type dog.
 *
 * Return: void
 */

void print_dog(struct dog *d)
{
	if (d != 0)
	{
		if ((*d).name != 0)
			printf("Name: %s\n", (*d).name);
		else
			printf("Name: (nil)\n");
		printf("Age: %f\n", (*d).age);
		if ((*d).owner != 0)
			printf("Owner: %s\n", (*d).owner);
		else
			printf("Owner: (nil)\n");
	}
}
