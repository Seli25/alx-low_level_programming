#include "main.h"

/**
 * _isalpha - function to check if the letter is lowwercase or uppercase
 *
 * @c: the value used in the function
 *
 * Return: Returns 0.
 */

int _isalpha(int c)
{
	int i, j;

	for (i = 'a'; i <= 'z'; i++)
	{
		for (j = 'A'; j <= 'Z'; j++)
		{
			if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z')
			{
			return (1);
			}
			else
				return (0);
		}
	}

	return (0);
}
