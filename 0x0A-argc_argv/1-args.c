#include <stdio.h>

/**
 * main - Function that prints the number of
 * arguments that are passed to it
 *
 * @argc: given input
 * @argv: given input
 *
 * Return: Returns 0
 */

int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", (argc - 1));
	return (0);
}
