#include "main.h"

/**
* _islower - Function to check for lowercase characters
*
* @c: given number
*
* Return: returns 1 on success else 0
*/

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);

	else
		return (0);
}
