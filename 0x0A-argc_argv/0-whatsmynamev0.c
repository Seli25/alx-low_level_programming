#include "main.h"
#include <stdio.h>

/**
 * prog_name - Function to print the program name
 *
 * @argc: contains the arguemnts inputed
 * @argv: array of pointer
 */

void prog_name(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("The program's name is: %s\n", argv[i]);
	}

	printf("\n");
}
