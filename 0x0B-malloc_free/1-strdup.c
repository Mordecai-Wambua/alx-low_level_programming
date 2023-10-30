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
	int l = strlen(str);

	if (str == NULL)
	{
		return (NULL);
	}
	d = (char *)malloc(l + 1);
	if (d == NULL)
	{
		return (NULL);
	}
	strcpy(d, str);
	return (d);
}
