#include "main.h"

/**
 * get_endianness - this checks the endianness
 *
 * Return: 1 if little endian, 0 if big endian
 */

int get_endianness(void)
{
	int q = 1;

	if (*(char *)&q == 1)
		return (1);
	else
		return (0);
}
