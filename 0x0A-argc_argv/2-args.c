#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that prints all arguments it receives.
 * @argc: Counts the number of parameters that go into main
 * @argv: Pointer of array containing strings entering main
 *
 * Return: Always 0
 */
int main(int argc, char **argv)
{
	int j;

	if (argc > 0)
	{
		for (j = 0; j < argc; j++)
		{
			printf("%s\n", argv[j]);
		}
	}
	return (0);
}
