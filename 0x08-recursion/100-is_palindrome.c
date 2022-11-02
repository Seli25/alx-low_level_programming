#include "main.h"

/**
 * checker - Function to check main string
 *
 * @s: given string
 *
 * Return: returns 0
 */

int checker(char *s)
{
	if (*s != '\0')
	{
		return (1 + checker(s + 1));
	}

	return (0);

}

/**
 * comp_str - Function to compare string both ways
 *
 * @s: given string
 * @n: comparator
 *
 * Return: returns 0
 */

int comp_str(char *s, int n)
{
	if (n <= 0)
	{
		return (1);
	}

	if (*s == *(s + (n - 1)))
	{
		return (comp_str(s + 1, n - 2));
	}

	else
	{
		return (0);
	}
}

/**
 * is_palindrome - Function to comfirm if a string is a
 * palindrome
 *
 * @s: given string
 *
 * Return: returns 1 if true or 0 if not
 */

int is_palindrome(char *s)
{
	int n;

	n = checker(s);

	return (comp_str(s, n));
}
