#include "main.h"
#include <stdio.h>
/**
 * flip_bits - this counts the number of bits to change
 * @n: is the first number input
 * @m: is the second number input we flip n to
 *
 * Return: number of bits to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = n ^ m, bits = 0;

	while (xor > 0)
	{
		bits += (xor & 1);
		xor >>= 1;
	}

	return (bits);
}
