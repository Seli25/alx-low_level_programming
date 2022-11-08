#include <stdio.h>

/**
 *  prog_name - Function to print the program name
 *
 * @argc: contains the arguemnts inputed
 * @argv: array of pointer
 *
 * Return: Returns 0
 */

int prog_name(int argc, char *argv[])
{
	printf("program's name is: %s\n", argv[0]);

	return (0);
}
