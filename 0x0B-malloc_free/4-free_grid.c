
#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - this frees a 2 dimensional grid previously created by
 * alloc_grid function.
 * @grid: a matrix double pointer
 * @height: rows (pointer)
 *
 * Return: 0
 */

void free_grid(int **grid, int height)
{
	int v;

	for (v = 0; v < height; v++)
	{
		free(*(grid + v));
	}
	free(grid);
}
