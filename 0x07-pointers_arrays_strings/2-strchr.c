#include "main.h"

/**
 * _strchr - this locates character in a string
 * @s: string input to check
 * @c: the character we are trying to find
 *
 * Return: a pointer to first occurence of c character
 */

char *_strchr(char *s, char c)
{
	unsigned int k;

	for (k = 0; s[k] != '\0'; k++)
		if (s[k] == c)
			break;
	return (s[k] == c ? (s + k) : '\0');
}
