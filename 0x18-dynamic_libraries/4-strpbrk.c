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
	int x, y;

	for (x = 0; s[x] != '\0'; x++)
	{
		for (y = 0; accept[y] != '\0'; y++)
		{
			if (s[x] == accept[y])
				return (s + x);
		}
	}
	return (0);
}
