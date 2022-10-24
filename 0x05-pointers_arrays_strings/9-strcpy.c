#include "main.h"

/**
 * _strcpy - copie the string
 *
 * @dest: the pointer that outputs the string
 * @src: the pointer that receive the string
 *
 * Return: dest.
 */

char *_strcpy(char *dest, char *src)
{
	int n = 0, i;

	while (src[n] != '\0')
	{
		n++;
	}

	i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	i = i;

	while (i <= n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
