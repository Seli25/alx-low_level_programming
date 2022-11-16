#include "function_pointers.h"

/**
 * int_index - searches for an integer in an array of integers
 *
 * @array: the array to search integers
 * @size: the size of the array
 * @cmp: pointer to the function used for comparison
 *
 * Return: if no element matches or size <= 0, return -1
 * else, output the index of first element
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}

	return (-1);
}
