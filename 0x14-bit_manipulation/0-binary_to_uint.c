#include "main.h"
#include <stdlib.h>

/**
 * binary_to_uint - this is a function that converts binary to unsigned int
 * @b: is pointing to a string of 0 and 1 chars
 *
 * Return: the converted number, or 0 if other string or b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;
	int rice = 0;

	if (b == NULL)
		return (0);

	while (b[rice])
	{
		if (b[rice] > '1' || b[rice] < '0')
			return (0);
		num = 2 * num + (b[rice] - '0');
		rice++;
	}

	return (num);
}
