#include "main.h"

/**
 * clear_bit - this sets the value of a given bit to 0
 * @n: pointer to the bit input
 * @index: the index of the bit to clear
 *
 * Return: for success 1 - otherwise -1 for failure
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n &= ~(1 << index);

	return (1);
}
