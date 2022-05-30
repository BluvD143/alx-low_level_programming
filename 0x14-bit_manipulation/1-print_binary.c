#include "main.h"
#include <stdio.h>

/**
 * print_binary - this is a function that prints the binary version of a number
 * @n: is the number to be printed
 *
 * Return: void
 */

void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);

	_putchar((n & 1) + '0');
}
