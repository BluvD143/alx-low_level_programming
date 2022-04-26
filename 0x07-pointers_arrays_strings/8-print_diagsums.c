#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints sum of two diagnols of a square matrix
 * @a: input square array
 * @size: size of the dimensions of the array
 *
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int m, n, sum1 = 0, sum2 = 0;

	for (n = 0, m = size - 1; n < (size * size); n += size + 1, m += size - 1)
		sum1 += a[n], sum2 += a[m];
	printf("%d, %d\n", sum1, sum2);
}
