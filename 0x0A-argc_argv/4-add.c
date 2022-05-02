#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * _isnumber - checks if string is a number
 * @s: string
 *
 * Return: On success 1.
 * If not a number, 0 is returned.
 */

int _isnumber(char *s)
{
	int j, check, k;

	j = 0, k = 0, check = 1;
	if (*s == '-')
		j++;
	for (; *(s + j) != 0; j++)
	{
		k = isdigit(*(s + j));
		if (k == 0)
		{
			check = 0;
			break;
		}
	}
	return (check);
}
/**
 * main - a program that adds positive numbers.
 * @argc: Counts the number of parameters that go into main
 * @argv: Pointer of array containing strings entering main
 *
 * Return: Always 0 
 */

int main(int argc, char **argv)
{
	int p, q, r;

	r = 0, q = 0;
	if (argc > 1)
	{
		for (p = 1; p < argc; p++)
		{
			if (_isnumber(argv[p]))
				q += atoi(argv[p]);
			else
				r = 1;
		}
	}
	if (r == 0)
		printf("%i\n", q);
	else
		printf("%s\n", "Error");
	return (r);
}
