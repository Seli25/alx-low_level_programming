#include "main.h"

/**
* _isdigit - Function to check for numbers
*
* @c: value to checked
*
* Return: returns 1 for correct value else 0
*/

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
