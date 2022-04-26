#include "main.h"

/**
 * print_chessboard - this function prints a chessboard.
 * @a: an array input to print
 *
 * Return: Nothing
 */
void print_chessboard(char (*a)[8])
{
	int k = 0, m;

	for (; k < 8; k++)
	{
		for (m = 0; m < 8; m++)
			_putchar(a[k][m]);
		_putchar('\n');
	}
}
