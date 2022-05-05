#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - this returns a pointer to a 2 dimensional array of integers
 * @width: columns
 * @height: rows
 *
 * Return: Double Pointer
 */

int **alloc_grid(int width, int height)
{
	int **s;
	int l, m, n, fr;

	fr = 0;
	if (width <= 0 || height <= 0)
		return (0);

	s = malloc(height * sizeof(int *));
	if (s == 0)
		return (0);
	for (l = 0; l < height; l++)
	{
		*(s + l) = malloc(width * sizeof(int));
		if (*(s + l) == 0)
		{
			fr = 1;
			break;
		}
		for (m = 0; m < width; m++)
		{
			s[l][m] = 0;
		}
	}
	if (fr == 1)
	{
		for (n = 0; n <= l; n++)
		{
			free(*(s + n));
		}
		free(s);
	}
	return (s);
}
