#include "main.h"

/**
 * _strlen_recursion - Function to reverse a string
 *
 * @s: pointer to a given string
 *
 *  Return: 0
 */

int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (1 + _str_recursion(s + 1));
	}

	return (0);
}
