#include "main.h"

/**
* _strstr - Function to locate substring
*
* @haystack: string to be searched
* @needle: substring to find
*
* Return: if found, returns pointer to substring,
* else NULL
*/

char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		char *src = haystack;
		char *sub = needle;

		while (*haystack && *sub && *haystack == *sub)
		{
			haystack++;
			sub++;
		}

		if (!*sub)
			return (src);

		haystack = src + 1;
	}

	return (0);
}
