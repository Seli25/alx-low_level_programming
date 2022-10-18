#include "main.h"

/**
 * print_alphabet - prints the aphabet in lowercase
 *
 * Return: void function.
 */

void print_alphabet(void)
{
	char l;

	for (l = 'a'; l <= 'z'; l++)
	{
		_putchar(l);
	}

	_putchar('\n');

}
