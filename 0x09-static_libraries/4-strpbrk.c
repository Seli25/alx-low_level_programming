#include "main.h"

/**
* _strpbrk - Function to searche a string
* for any of a set of bytes
*
* @s: pointer to string to be checked
* @accept: bytes to check for
*
* Return: returns a pointer to a matching set,
* else NULL
*/

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				return (s + i);
		}
	}

	return (0);
}
