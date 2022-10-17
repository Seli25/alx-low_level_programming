#include <stdio.h>

/**
 * main - main function of the program
 *
 * Return: 0
 */

int main(void)
{
	char L;

	for (L = 'a'; L <= 'z'; L++)
	{
		if (L != 'e' && L != 'q')

			putchar(L);
	}

	putchar('\n');

	return (0);
}
