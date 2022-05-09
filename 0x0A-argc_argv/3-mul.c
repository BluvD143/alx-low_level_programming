#include <stdio.h>
#include <stdlib.h>

/**
 * main -  a program that multiplies two numbers.
 * @argc: Counts the number of parameters that go into main
 * @argv: Pointer of array containing strings entering main
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char **argv)
{
	int j, k;

	k = 0;
	if (argc != 3)
	{
		printf("%s\n", "Error");
		k = 1;
	}
	else
	{
		j = atoi(argv[1]) * atoi(argv[2]);
		printf("%i\n", j);
	}
	return (k);
}
