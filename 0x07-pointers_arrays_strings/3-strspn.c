#include "main.h"

/**
 * _strspn - this gets the length of a prefix substring
 * @s: input string to check for substring
 * @accept: characters bytes that substring must include
 *
 * Return: the number of bytes in the initial segment of s which consists only of bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, k, a_len = 0, len = 0;

	while (accept[a_len] != '\0')
		a_len++;
	for (i = 0; s[i] != '\0'; i++)
		for (k = 0; k < a_len; k++)
			if (s[i] == accept[k])
				len++, k = a_len;
			else
				if (k == a_len - 1)
					goto exit;
exit: return (len);
}
