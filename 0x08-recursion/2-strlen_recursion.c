#include "main.h"

/**
 * _strlen_recursion - returns Length of String
 * @s: the string to return
 *
 * Return: length of a string
 */

int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}
	return (0);
}
