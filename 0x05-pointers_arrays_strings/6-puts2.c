#include "main.h"

/**
 * puts2 - prints every other character of a string
 * @str: the string to be treated
 *
 * Return: void
 */

void puts2(char *str)
{
	int i, x;
	i = 0;
	x = 0;

	while (str[i++])
	{
		x++;
	}
	for (i = o; i < x; i += 2)
	{
		_putchar(*(sstr + i));
	}
	_putchar('\n');
}
