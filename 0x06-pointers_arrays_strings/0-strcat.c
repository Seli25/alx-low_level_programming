#include "main.h"

/**
 * *_strcat - function to concatenate two strings
 *
 * @dest: the output string
 * @src: the given string
 *
 * Return: Returns output string
 */

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int dest_len = 0;

	while (dest[i++])
		dest_len++;

	for (i = 0; src[i]; i++)
	{
		dest[dest_len++] = src[i];
	}

	return (dest);
}
