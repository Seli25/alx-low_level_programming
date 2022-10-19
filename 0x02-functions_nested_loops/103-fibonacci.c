#include <stdio.h>

/**
 * main - main program that prints the sum of
 * all even fibonacci numbers under 4 million.
 *
 * Return: Retun 0
 */

int main(void)
{
	unsigned long i, j, k, num, sum;

	i = sum = 0;
	j = 1;

	for (num = 0; num < 50; num++)
	{
		k = i + j;
		i = j;
		j = k;

		if (k % 2 == 0 && k < 4000000)
		{
			sum += k;
		}
	}

	printf("%lu\n", sum);

	return (0);
}
