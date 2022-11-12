#include "main.h"

/**
 * *array_range - Function to create an array of integers
 *
 * @min: min value of array
 * @max: max value of array
 *
 * Return: returns pointer to the new array
 */

int *array_range(int min, int max)
{
	int *arr;
	int i, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	arr = malloc(sizeof(int) * size);

	if (arr == NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
		arr[i] = min++;

	return (arr);
}
