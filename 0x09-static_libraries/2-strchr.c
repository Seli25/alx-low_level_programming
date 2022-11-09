#include "main.h"

/**
* _strchr - Loctes a character in a string
*
* @s: The string to check
* @c: The character to find
*
* Return: returns pointer to @s or NULL
*
*/

char *_strchr(char *s, char c)
{
	while (*s)
	{
		s++;

		if (*s == c)
		{
			return (s);
		}
	}

	return (0);
}
