#include <stdlib.h>
#include "main.h"

/**
 * argstostr - Function to concatenate all arguments given
 *
 * @ac: given input
 * @av: given input
 *
 * Return: a pointer to a new string or NULL on failure
 */

char *argstostr(int ac, char **av)
{
	int i, n, k = 0;
	int len = 0;
	char *conc;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (n = 0; av[i][n]; n++)
			len++;
	}

	len += ac;

	conc = malloc(sizeof(char) * len + 1);

	if (conc == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (n = 0; av[i][n]; n++)
		{
			conc[k] = av[i][n];
			k++;
		}

		if (conc[k] == '\0')
		{
			conc[k++] = '\n';
		}
	}

	return (conc);
}
