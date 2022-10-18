#include "main.h"

/**
 * main - prints _putchar
 *
 * Return: Returns 0
 */

int main(void)
{
	char print[] = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
	{
		_putchar(print[i]);
	}

	_putchar('\n');

	return (0);
}
