#include <stdio.h>

/**
 * main - main function of the program.
 *
 * Return: Returns 0.
*/

int main(void)
{
	int i, j, k;

	for (i = 0; i <= 9; i++)
	{
		for (j = i + 1; j <= 9; j++)
		{
			for (k = j + 1; k <= 9; k++)
			{
			       	putchar("%d,%d,%d,\n", i, j, k);
			}
		 }
	}

	return (0);
}
