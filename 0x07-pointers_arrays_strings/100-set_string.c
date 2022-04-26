#include "main.h"

/**
 * set_string - a function that sets the value of a pointer to a char.
 * @s: double pointer to a string to modify
 * @to: pointer to the string to assign s to
 *
 * Return: Description of the returned value
 */
void set_string(char **s, char *to)
{
	*s = to;
}
