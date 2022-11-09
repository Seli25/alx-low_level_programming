#include <stdlib.h>
#include "main"

/**
 * create_array - Function to create an array of chars and
 * initialize it with a specific char
 *
 * @size: size of given array
 * @c: intializion char
 *
 * Return: Returns 0 or NULL if function fails. Else, return a pointer
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arr;

	if (size == 0)
		return (NULL);

	arr = malloc(sizeof(char) * size);

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		arr[i] = c;

	return (arr);
}
