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
		if (i == 0)
		{
			printf("%d", a[i]);
		}

		else
		{
			printf(", %d", a[i]);
		}
	}
	
	putchar('\n');
}
