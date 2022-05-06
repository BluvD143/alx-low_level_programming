#include "main.h"
#include <stdlib.h>

/**
 * count - this is a function counts the number of words in a string
 * @s: is a pointer to a string
 *
 * Return: the number of words
 */

int count(char *s)
{
	int i, kit = 1;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] != ' ' && (s[i + 1] == ' ' || s[i + 1] == '\0'))
		{
			kit++;
		}
	}

	return (kit);
}

/**
 * strtow - this is a function that splits a string into words
 * @str: is a pointer to a string
 *
 * Return: a pointer to an array of strings
 */

char **strtow(char *str)
{
	char **words;
	int kit, i, j, k, l, x = 0;

	if (str == NULL || *str == '\0')
		return (NULL);
	kit = count(str);
	if (kit == 1)
		return (NULL);
	words = (char **) malloc(sizeof(char *) * kit);
	if (words == NULL)
		return (NULL);
	words[kit - 1] = NULL;
	i = 0;
	while (str[i])
	{
		if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
		{
			for (j = 1; str[i + j] != ' ' && str[i + j]; j++)
				;
			j++;
			words[x] = (char *) malloc(sizeof(char) * j);
			j--;
			if (words[x] == NULL)
			{
				for (k = 0; k < x; k++)
					free(words[k]);
				free(words[kit - 1]);
				free(words);
				return (NULL);
			}
			for (l = 0; l < j; l++)
				words[x][l] = str[i + l];
			words[x][l] = '\0';
			x++;
			i += j;
		}
		else
			i++;
	}
	return (words);
}
