#include "main.h"

/**
 * *malloc_checked - Function to allocate memory using malloc
 *
 * @b: number of bytes to allocate
 *
 * Return: retuns a pointer
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
