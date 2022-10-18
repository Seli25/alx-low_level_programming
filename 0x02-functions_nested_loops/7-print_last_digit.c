#include "main.h"

/**
 * print_last_digit - function to print the last digit of a number
 *
 *@n: value to be used in the function
 *
 * Return: Returns the last digit
 *
 */

int print_last_digit(int n)
{
	int ld = n % 10;

	if (n < 0)
	{
		ld = ld * -1;
	}

	_putchar(ld + '0');

	return (ld);

}
