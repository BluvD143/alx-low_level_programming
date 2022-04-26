#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: input string to search for substring
 * @accept: characters that prefix substring must include
 *
 * Return: length of prefix substring
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int m, n, a_len = 0, len = 0;

	while (accept[a_len] != '\0')
		a_len++;
	for (m = 0; s[m] != '\0'; m++)
		for (n = 0; n < a_len; n++)
			if (s[n] == accept[n])
				len++, n = a_len;
			else
				if (n == a_len - 1)
					goto exit;
exit: return (len);
}
