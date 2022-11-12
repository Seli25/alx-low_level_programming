#include "main.h"

/**
 * _calloc - Allocates memory for an array of a certain number
 *           of elements each of an inputted byte size.
 *
 * @nmemb: The number of elements.
 * @size: The byte size of each array element.
 *
 * Return: returns a pointer or NULL on failure
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	char *c;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(size * nmemb);

	if (ptr == NULL)
		return (NULL);

	c = ptr;

	for (i = 0; i < (size * nmemb); i++)
		c[i] = '\0';

	return (ptr);
}
