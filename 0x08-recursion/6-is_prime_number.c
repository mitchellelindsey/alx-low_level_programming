#include "main.h"

/**
 * prime_a - calculate if its a prime
 * @a: input
 * @b: divisor
 * Return: (0)
 */

int prime_a(int a, inb b)
{
	if (a <= 1 || (a != b && a % b == 0))
	{
		return (0);
	}
	else if (a == b)
	{
		return (1);
	}
}

/**
 * is_prime_number - returns 1 if the input integer is a prime number
 * @n: input number
 * Return: 0 or 1
 */

int is_prime_number(int n)
{
	return (prime_a(n, 2));
}
