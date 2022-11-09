#include "main.h"

/**
* _strlen - Function to return the length of a string
*
* @s: string pointer
*
* Return: returns the length of the character
*/

int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}

	return (len);
}
