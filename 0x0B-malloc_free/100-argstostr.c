#include "main.h"
#include <stdlib.h>

/**
 * argstostr - this concatenates all the arguments of your program
 * @ac: argument count in main
 * @av: arguments passed to main
 *
 * Return: Pointer
 */

char *argstostr(int ac, char **av)
{
	char *s;
	int l, lt, p, q, r;

	if (ac == 0 || av == NULL)
		return (0);
	l = 0, r = 0;
	for (p = 0; p < ac; p++)
	{
		lt = 0;
		while (av[p][lt])
			lt++;
		l += lt + 1;
	}
	s = malloc((l + 1) * sizeof(char));

	if (s == 0)
		return (0);

	for (q = 0; q < ac; q++)
	{
		lt = 0;
		while (av[q][lt])
		{
			*(s + r) = av[q][lt];
			r++;
			lt++;
		}
		*(s + r) = '\n';
		r++;
	}
	*(s + r) = '\0';

	return (s);
}
