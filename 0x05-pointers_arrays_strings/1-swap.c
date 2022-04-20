#include "main.h"

/**
 * swaps_int - swaps the values of two integers
 * using two input parameters
 * @a: input integer 1
 * @b: input integer 2
 *
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int pre;

	pre = *a;
	*a = *b;
	*b = pre;
}
