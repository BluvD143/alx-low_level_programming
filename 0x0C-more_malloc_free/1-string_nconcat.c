#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat -  this concatenates two strings
 * @s1: string input 1
 * @s2: string input 2
 * @n: n bytes of string 2
 *
 * Return: Pointer to allocated memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int l0, l3, x, y;
	char *s;
	char *nul = "";

	if (s1 == NULL)
		s1 = nul;
	if (s2 == NULL)
		s2 = nul;

	l0 = 0, l3 = 0;
	while (*(s1 + l0))
		l0++;
	while (*(s2 + l3))
		l3++;

	if (n < l3)
		l3 = n;

	s = malloc(sizeof(char) * (l0 + l3 + 1));

	if (s == 0)
		return (0);

	for (x = 0; x < l0; x++)
		*(s + x) = *(s1 + x);

	for (x = 0, y = l0; x < l3; y++, x++)
		*(s + y) = *(s2 + x);

	*(s + y) = '\0';

	return (s);
}
