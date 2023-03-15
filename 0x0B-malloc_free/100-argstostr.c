#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of my program.
 * @ac: argc.
 * @av: argv.
 *
 * Return: ptr of an arr of char
 */
char *argstostr(int ac, char **av)
{
	char *all;
	int c, i, j, ia;

	if (ac == 0)
		return (NULL);

	for (c = i = 0; i < ac; i++)
	{
		if (av[i] == NULL)
			return (NULL);

		for (j = 0; av[i][j] != '\0'; j++)
			c++;
		c++;
	}

	all = malloc((c + 1) * sizeof(char));

	if (all == NULL)
	{
		free(all);
		return (NULL);
	}

	for (i = j = ia = 0; ia < c; j++, ia++)
	{
		if (av[i][j] == '\0')
		{
			all[ia] = '\n';
			i++;
			ia++;
			j = 0;
		}
		if (ia < c - 1)
			all[ia] = av[i][j];
	}
	all[ia] = '\0';

	return (all);
}
