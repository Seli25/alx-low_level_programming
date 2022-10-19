#include <stdio.h>

/**
 * main - main function to find sum of the multiples
 * of 3 and 5 below 1024 (exculded)
 *
 *  Return: Returns 0
 */

int main(void)
{
	int sum = 0, i;

	for (i = 0; i < 1024; i++)

		if (i % 3 == 0 || i % 5 == 0)
		{
			sum = sum + i;
		}

	printf("%i", sum);

	return (0);
}
