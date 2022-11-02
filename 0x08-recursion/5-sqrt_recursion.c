#include "main.h"

/**
 * nat_sqrt - function to find squareroot
 *
 * @n: given number
 * @root: root
 *
 * Return: Returns the squareroot
 */

int nat_sqrt(int n, int root)
{
	if (n * n == root)
		return (root);

	if (root == n / 2)
		return (-1);

	return (nat_sqrt(n, root + 1));
}

/**
 * _sqrt_recursion - function to find natural squareroot
 *
 * @n: given number
 *
 * Return: returns natural root
 */

int _sqrt_recursion(int n)
{
	int i = 0;

	if (n < 0)
		return (-1);

	else
	{
		return (nat_sqrt(i, n));
	}
}
