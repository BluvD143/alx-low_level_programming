#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - this prints a name
 * @name: name to be printed
 * @f: callback function that prints name
 *
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (!f || !name)
		return;
	(*f)(name);
}
