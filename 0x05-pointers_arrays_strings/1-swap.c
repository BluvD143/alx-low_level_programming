#include "main.h"

/**
 * swaps_int - swaps the value of two integers
 * @a: an intege to swap
 * @b: another integer to swap
 *
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int y = *a;

	*a = *b;
	*b = y;
}
