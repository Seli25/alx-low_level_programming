#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n times the elements of the array
 *
 * @a: pointer
 * @n: times to print
 *
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		print("%d", a[i]);

		if (i < n - 1)
		{
			printf(", ");
		}
	}
	putchar('\n');
}
