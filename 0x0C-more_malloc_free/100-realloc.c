#include "main.h"

/**
 * *_realloc - reallocates a memory block using malloc and free
 *
 * @ptr: pointer to the memory previsouly allocated by malloc
 * @old_size: size of the allocated memory for old pointer
 * @new_size: new size of the new memory block
 *
 * Return: returns pointer to the newly allocated memory block
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *copy, *old_ptr;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}

	if (!copy)
		return (malloc(new_size));

	copy = malloc(new_size);
	
	if (!copy)
		return (NULL);

	old_ptr = ptr;

	if (new_size < old_size)
	{
		for (i = 0; i < new_size; i++)
			copy[i] = old_ptr[i];
	}

	if (new_size > old_size)
	{
		for (i = 0; i < old_size; i++)
			copy[i] = old_ptr[i];
	}

	free(ptr);

	return (copy);
}
