#include "main.h"

/**
 * print_rev - function to print a string in reverse
 *
 * @s: given string
 */

void print_rev(char *s)
{
	int i = 0;

	while (s[i] != 0)
	{
		i++;
	}

	while (i > 0)
	{
		i--;
		_putchar(s[i]);
	}

	_putchar('\n');
}
