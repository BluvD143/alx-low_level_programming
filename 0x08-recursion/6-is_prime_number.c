#include "main.h"

/**
 * prime2 - this searches if a number is prime
 * @a: the number to check
 * @b: number that iterates from 1 to n
 *
 * Return: whether or not the number is a prime number
 */
int prime2(int a, int b)
{
	if (a == b)
		return (1);
	else if (a % b == 0)
		return (0);
	return (prime2(a, b + 1));
}
/**
 * is_prime_number - checks if an integr is a prime number
 * @n: number integer to check
 *
 * Return: 0 if the number is prime , and 1 if it is not
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime2(n, 2));
}
