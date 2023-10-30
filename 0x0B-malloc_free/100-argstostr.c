#include "main.h"
#include <string.h>
#include <stdlib.h>


/**
 * argstostr - concatenates all the arguments
 * @ac: argument count
 * @av: argument vector
 *
 * Return: char
 */

char *argstostr(int ac, char **av)
{
	char *f;
	int i, j, l;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		l = strlen(av[i] + 1);
	}

	f = (char *)malloc(l + 1);

	if (f == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		strcpy(f + j, av[i]);
		j += strlen(av[i]);
		f[j] = '\n';
		j++;
	}

	f[j] = '\0';

	return (f);
}
