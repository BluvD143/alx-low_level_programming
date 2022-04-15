#include "main.h"

/**
  * print_square - Prints n squares followed by a new line number
  * @size: The number of squares/number of times
  *
  * Return: void
  */

void print_square(int size)
{
	int x, y;

	if (size > 0)
	{
		for (x = 0; x < size; x++)
		{
			for (y = 0; y < size; y++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n'
			 }
}
