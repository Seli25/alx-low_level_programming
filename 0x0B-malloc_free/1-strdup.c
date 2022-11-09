#include <stdlib.h>
#include "main.h"

/**
 * _strdup - Function to return a pointer to new space
 * in memory
 *
 * @str: given string
 *
 * Return: returns NULL if empty or a pointer on success
 */

char *_strdup(char *str)
{
	char *dup_str;
	unsigned int len = 0, i;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[len] != '\0')
	{
		len++;
	}

	dup_str = malloc(sizeof(char) * (len + 1));

	if (dup_str == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < len; i++)
	{
		dup_str[i] = str[i];
	}

	dup_str[len] = '\0';

	return (dup_str);
}
