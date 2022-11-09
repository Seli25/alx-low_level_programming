#include <stdlib.h>
#include "main.h"

/**
* str_concat - Function to concatenate two strings
*
* @s1: given string 1
*
* @s2: given string 2
*
* Return: returns newly concatenated string, or NULL if empty
*/

char *str_concat(char *s1, char *s2)
{
	unsigned int s1_len = 0;
	unsigned int s2_len = 0;
	unsigned int i, j;
	char *str_memory;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (*(s1 + s1_len) != '\0')
		s1_len++;

	while (*(s2 + s2_len) != '\0')
		s2_len++;

	str_memory = malloc(1 + (s1_len * sizeof(*s1)) + (s2_len * sizeof(*s2)));
	if (str_memory == NULL)
		return ('\0');

	for (i = 0; i < s1_len; i++)
		str_memory[i] = *(s1 + i);

	for (j = 0; j < s2_len; j++, i++)
		str_memory[i] = *(s2 + j);

	return (str_memory);
}
