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

	if (n * n > root)
		return (-1);

	return (nat_sqrt(root, n + 1));
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
	return (nat_sqrt(n, 0));
}
