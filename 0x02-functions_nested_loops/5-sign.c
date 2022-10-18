#include "main.h"

/**
 * print_sign - program that prints the sign of a number
 *
 * @n: value being used in the program
 *
 * Return: Returns 0
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}

	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}

	else
	{
		_putchar('-');
		return (-1);
	}

	return (0);
}
