#include "main.h"

/**
 * get_bit - returns the  value of a bit at a given index
 * @n: is the number input
 * @index: the index
 *
 * Return: value of bit at index
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int k;

	k = (n >> index);

	if (index > 32)
		return (-1);

	return (k & 1);
}
