#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _memset -  this initializes n bytes of memory to x
 * @ptr: initial adress
 * @x: the intializing variable
 * @n: number of bytes to initialize
 *
 * Return: Return pointer char (so movements are 1 byte)
 */

char *_memset(char *ptr, int x, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		ptr[i] = x;

	return (ptr);
}

/**
 * _calloc - this allocates memory for an array using malloc 
 * @nmemb: number of elements of array to allocate
 * @size: size of elements
 *
 * Return: Pointer to allocated memory place with a status value
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;


	if (nmemb == 0 || size == 0)
		return (0);

	p = malloc(nmemb * size);
	if (p == 0)
		return (0);
	_memset(p, 0, size * nmemb);

	return (p);
}
