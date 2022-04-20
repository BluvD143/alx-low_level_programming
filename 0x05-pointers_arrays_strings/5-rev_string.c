#include "main.h"

/**
 * rev_string - prints a reverse string
 * @s: pointer to the string to print
 *
 * Return: void
 */

void rev-string(char *s)
{
	int i, j;
	char a[500];
	i = 0;
	j = 0;
	while (*(s + i))
	{
		*(a + i) = *(s + i);
		i++;
	}
	i = i - 1;
	while (i >= 0)
	{
		*(s + i) = *(a + j);
		j++;
		i--;
	}
}
