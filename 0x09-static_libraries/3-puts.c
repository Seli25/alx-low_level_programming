#include "main.h"

/**
 * _puts - Function to print a string and a new line
 *
 * @str: pointer to a string
 *
 * Return: returns 0
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}

	_putchar('\n');
}
