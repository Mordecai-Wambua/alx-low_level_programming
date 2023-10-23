#include "main.h"
#include <string.h>
#include <stddef.h>

/**
 * _strpbrk - search a string for any of a set of bytes
 * @s: string to be searched
 * @accept: string containing characters
 *
 * Return: char
 */

char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		while (*a != '\0')
		{
			if (*s == *a)
			{
				return (s);
			}
			a++;
		}
		s++;
	}
	return (NULL);
}
