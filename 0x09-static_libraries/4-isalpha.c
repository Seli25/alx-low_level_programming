#include "main.h"

/**
 * _isalpha - Function to check if input is a letter
 *
 * @c: the integer value it receives
 *
 * Return: 1 if true, else 0
 */

int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
	return (1);
	}

	else if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}

	else
	{
		return (0);
	}
}
