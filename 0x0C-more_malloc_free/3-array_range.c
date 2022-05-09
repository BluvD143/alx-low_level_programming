#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range -  this creates an array of integers
 * The array created should contain all the values
 * from min (included) to max (included), ordered from min to max
 * @min: minimal value
 * @max: maximum value
 *
 * Return: Pointer to a newly created array
 */

int *array_range(int min, int max)
{
	int *p;
	int size, x, y;

	if (min > max)
		return (0);

	if (max > min)
		size = max - min + 1;
	else if (max == min)
		size = 2;

	p = malloc(sizeof(int) * size);
	if (p == 0)
		return (0);

	for (x = 0, y = min; y <= max; x++, y++)
		p[x] = y;
	if (max == min)
		p[x] = max;
	return (p);
}
