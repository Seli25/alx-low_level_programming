#include "main.h"

/**
 * _islower - function to check if the letter is lewwer case
 *
 * @c: the value used in the function
 *
 * Return: void function.
 */

int _islower(int c)
{
	int i = 'a';

	for (i = 'a'; i < 'z'; i++)
	{
		if (c == i)
		{
			return (1);
		}
		else
			return (0);
	}

	return (0);
}
