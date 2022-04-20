#include "main.h"

/**
 * swaps_int - swaps the values of two integers
 * @a: input integer 1
 * @b: input integer 2
 *
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int y = *a;

	*a = *b;
	*b = y;
}
