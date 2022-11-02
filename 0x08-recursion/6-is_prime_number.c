#include "main.h"

/**
 * check_prime - Function to check if a number is a prime
 *
 * @i:given value
 * @j: divisor
 *
 * Return: Returns 1 or 0
 */

int check_prime(int i, int j)
{
	if (j < 2 || j % i == 0)
		return (0);

	else if (i > j / 2)
		return (1);

	else
		return (check_prime(i + 1, j));
}

/**
 * is_prime_number - function to check if the input is a
 * prime number
 *
 * @n: given value
 *
 * Return: returns 1 or 0
 *
 */

int is_prime_number(int n)
{
	if (n == 2)
		return (1);

	return (check_prime(2, n));
}
