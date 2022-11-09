#include "main.h"

/**
* _strcpy - Function to copy strings
* from one array to another
*
* @dest: destination array
* @src: source array
*
* Return: pointer to dest array
*/

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		*(dest + i) = src[i];
		i++;
	}

	*(dest + i) = '\0';

	return (dest);
}
