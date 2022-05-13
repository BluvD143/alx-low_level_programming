#include "function_pointers.h"

/**
 * int_index - is a function that searches for an integer
 * @array: is an array input
 * @size: is the size of the array
 * @cmp: is a pointer to the function to be used to compare values
 * Return: index for cmp not 0, -1 for no matches or if size <= 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size > 0 && cmp && size && array)
		for (i = 0; i <= size; i++)
			if (cmp(array[i]))
				return (i);
	return (-1);

}
