#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "main.h"

/**
* main - Function to add numbers
*
* @argc: number of arguments
* @argv: string pointers
*
* Return: returns 0 oo errors, else 1
*/

int main(int argc, char *argv[])
{
	int a = 0, i, j;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j]; j++)
		{
			if (isdigit(argv[i][j]) == 0)
			{
				printf("Error");
				return (1);
			}
		}
	}

	for (i = 1; i < argc; i++)
	{
		a += atoi(argv[i]);
	}

	printf("%d\n", a);

	return (0);
}
