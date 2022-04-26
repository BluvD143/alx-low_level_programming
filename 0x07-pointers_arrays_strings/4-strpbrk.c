#include "main.h"

/**
 * _strpbrk - this search for a string for any of the set of bytes.
 * @s: input string to search for matching char
 * @accept: characters that could be matched
 *
 * Return: pointer to matching char
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int k, b;

	for (k = 0; s[k] != '\0'; k++)
		for (b = 0; accept[b] != '\0'; b++)
			if (s[k] == accept[b])
				goto exit;
exit: return (s[k] != '\0' ? s + k : '\0');
}
