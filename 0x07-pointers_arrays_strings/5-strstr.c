#include "main.h"

/**
 * _strstr - this locates a substring substring
 * @haystack: string to find the first ossurence of a substring 
 * @needle: substring to find match of
 *
 * Return: pointer to the beginning of a located substring
 */

char *_strstr(char *haystack, char *needle)
{
	int x;

	while (*haystack != '\0')
	{
		x = 0;
		while (*haystack == *needle && *haystack != '\0' && *needle != '\0')
			haystack++, needle++, x++;
		if (*needle == '\0')
			return (haystack - x);
		haystack -= (x - 1), needle -= x;
	}
	return ('\0');
}
