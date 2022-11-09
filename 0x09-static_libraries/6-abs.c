#include "main.h"

/**
 * _abs - Function to print the absolute vlaue of
 * an integer
 *
 * @n: given value
 *
 * Return: returns absolute value
 */

int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	}

	else if (n < 0)
	{
		return (-n);
	}

	else
	{
		return (n);
	}
}
