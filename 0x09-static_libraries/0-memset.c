#include "main.h"

/**
 * _memset - this fills memory with a constant alue
 * @s: this input pointer to string
 * @b: constant byte
 * @n: this is the number of bytes to fill
 *
 * Return: pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
