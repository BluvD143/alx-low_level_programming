#include "main.h"
#include <stlib.h>

/**
 * main - is a program that prints its name
 * @argc: this counts the number of parameters
 * @argv: pointer to array
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - 1]);
		return (0);
}
