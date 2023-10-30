#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - return a pointer to newly allocated space in memory
 * @str: input string
 *
 * Return: char
 */

char *_strdup(char *str)
{
	char *d;
	unsigned int l;

	if (str == NULL)
	{
		return (NULL);
	}

	l = strlen(str);

	d = (char *)malloc((l + 1) * sizeof(char));
	if (d == NULL)
	{
		return (NULL);
	}
	strcpy(d, str);
	return (d);
}
