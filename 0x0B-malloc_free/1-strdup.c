#include "main.h"
#include <stdlib.h>

/**
 *_strdup - this allocate pointer to a newly space in memory
 *@str: string to input.
 *
 *Return: pointer to string.
*/

char *_strdup(char *str)
{
	int m;
	char *str1;

	if (str == NULL)
		return (NULL);

	for (m = 0; str[m]; m++)
	;
	m++;
	str1 = malloc(sizeof(char) * m);

	if (str1 == NULL)
		return (NULL);

	for (m = 0; str[m] != '\0'; m++)
		str1[m] = str[m];
	str1[m] = '\0';
	return (str1);
}
