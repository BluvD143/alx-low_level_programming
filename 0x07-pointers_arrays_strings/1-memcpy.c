#include "main.h"

/**
 * _memcpy - this copies memory area
 * @dest: destination of the input pointer
 * @src: the memory area of the source to copy from
 * @n: number of bytes
 *
 * Return: pointer to destination string
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(dest + i) = *(src + i);
		i++;
	}
	return (dest);
}
