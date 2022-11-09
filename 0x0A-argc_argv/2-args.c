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
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
