#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: char
 */

char *str_concat(char *s1, char *s2)
{
	char *f;
	unsigned int l1, l2;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	l1 = strlen(s1);
	l2 = strlen(s2);

	f = (char *)malloc(l1 + l2 + 1);

	if (f == NULL)
	{
		return (NULL);
	}

	strcpy(f, s1);
	strcat(f, s2);

	return (f);
}
