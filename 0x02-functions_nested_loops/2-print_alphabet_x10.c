#include "main.h"

/**
 * print_alphabet_x10 - prints the aphabet in lowercase x10
 *
 * Return: void function.
 */

void print_alphabet_x10(void)
{
	int i, l;

	for (i = 0; i < 10; i++)
	{
		for (l = 'a'; l <= 'z'; l++)
		{
			_putchar(l);
		}
		_putchar('\n');
	}
}
