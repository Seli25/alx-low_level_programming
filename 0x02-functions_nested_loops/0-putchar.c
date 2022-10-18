#include <unistd.h>

/*
 * _putchar - print a single character
 *
 * Return: On success 1 on failure 0
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
