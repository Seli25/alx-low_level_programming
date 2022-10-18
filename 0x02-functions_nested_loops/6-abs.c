#include "main.h"

/**
 * _abs - program that prints the absolute value of a number
 *
 * @n: value being used in the program
 *
 * Return: Returns 0
 */

int _abs(int n)
{
	int absn;

	if (n < 0)
	{
		absn = n * -1;
		return (absn);
	}

	else
	{
		absn = n;
		return (absn);
	}

	return (0);
}
