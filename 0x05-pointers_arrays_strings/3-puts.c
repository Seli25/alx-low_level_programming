#include "main.h"
#include <stdio.h>

/**
 * _puts - prints a string
 *
 * @str: string given
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
