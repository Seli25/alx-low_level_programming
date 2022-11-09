#include "main.h"

/**
* _strncpy - Function to copy a given string up to @n
*
* @dest: destination string
* @src: source string
* @n: Number of bytes of src that should be copied to dest
*
* Return: returns pointer to dest
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (src[i] != '\0' && i < n)
	{
		*(dest + i) = src[i];
		i++;
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
