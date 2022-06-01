#include <stdio.h>
#include <stdlib.h>

/**
 * main - is a function that prints the informaation contained in the ELF header
 * @argc: this is the number of arguments to the program
 * @argv: is the array of pointers to the arguments
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int i;
	char *mem;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	i = atoi(argv[1]);

	if (i < 0)
	{
		printf("Error\n");
		exit(2);
	}

	while (i--)
		printf("%02x%c", *mem++ & 0xff, i ? ' ' : '\n');

	return (0);
}
