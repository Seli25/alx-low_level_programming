#include <stdio.h>

/**
 * main - main function that print the first 98
 * fibonaci numbers starting from 1 and 2
 *
 * Return: Retuns 0:
 */

int main(void)
{
	unsigned long n1 = 1, n2 = 2, num = 3;
	unsigned long nextnum = n1 + n2;

	printf("%lu, ", n1);
	printf("%lu, ", n2);

	while (num <= 98)
	{
		if (num == 98)
		{
			printf("%lu\n", nextnum);
		}

		else
		{
			printf("%lu, ", nextnum);
		}

		n1 = n2;
		n2 = nextnum;

		nextnum = n1 + n2;
		num++;
	}

	return (0);
}