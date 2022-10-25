#include "main.h"
#include <stdio.h>

/**
 * puts2 - prints out every other number on a string
 *
 * @str: given string
 */

void puts2(char *str)
{
	int i, j;

	for (i = 0; str[i] != '\0'; i++)
	{
		;
	}
	
	for (j = 0; j < i; j += 2)
	{
		_putchar(str[j]);
	}

	_putchar('\n');
}
