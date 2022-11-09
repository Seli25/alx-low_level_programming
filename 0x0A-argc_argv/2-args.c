#include <stdio.h>

/**
 * main - Function that prints all argument it receives
 *
 * @argc: given inputs
 * @argv: given inputs
 *
 * Return: returns 0
 */

int main(int argc, char *argv[])
{
	int i = 0;

	if (argc > 0)
	{
		while (i < argc)
		{
		printf("%s\n", argv[i]);
		i++;
		}
	}

	return (0);
}
