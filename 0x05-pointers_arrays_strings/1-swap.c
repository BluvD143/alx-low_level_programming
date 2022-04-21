#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * using two input parameters
 * @u: pointer 1
 * @v: pointer 2
 *
 * Return: void
 */

void swap_int(int *u, int *v)
{
	int y = *u;
	*u = *v;
	*v = y;
}
