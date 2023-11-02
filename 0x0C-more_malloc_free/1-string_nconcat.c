#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: required number of bytes of s2
 *
 * Return: char
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
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

	if (n >= l2)
	{
		f = (char *)malloc(l1 + l2 + 1);

		if (f == NULL)
		{
			return (NULL);
		}
		strcpy(f, s1);
		strcat(f, s2);
	}
	else
	{
		f = (char *)malloc(l1 + n + 1);

		if (f == NULL)
		{
			return (NULL);
		}
		strcpy(f, s1);
		strncat(f, s2, n);
	}

	return (f);
}
