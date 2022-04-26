#include "main.h"

/**
 * _strstr - this returns pointer to first char of matching substring
 * @haystack: string to search substring in
 * @needle: substring to find match of
 *
 * Return: pointer to first char of matching substring
 */

char *_strstr(char *haystack, char *needle)
{
	int m;

	while (*haystack != '\0')
	{
		m = 0;
		while (*haystack == *needle && *haystack != '\0' && *needle != '\0')
			haystack++, needle++, m++;
		if (*needle == '\0')
			return (haystack - m);
		haystack -= (m - 1), needle -= m;
	}
	return ('\0');
}
