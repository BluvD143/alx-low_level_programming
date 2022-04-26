#include "main.h"

/**
 * _strspn - this gets the length of a prefix substring
 * @s: input string to look for substring
 * @accept: characters that prefix substring must include
 *
 * Return: length of prefix substring
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int m, n, b_len = 0, len = 0;

	while (accept[b_len] != '\0')
		b_len++;
	for (m = 0; s[m] != '\0'; m++)
		for (n = 0; n < b_len; n++)
			if (s[m] == accept[n])
				len++, n = b_len;
			else
				if (n == b_len - 1)
					goto exit;
exit: return (len);
}
