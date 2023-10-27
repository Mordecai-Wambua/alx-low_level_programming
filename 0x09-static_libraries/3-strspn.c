#include "main.h"
#include <stddef.h>
#include <string.h>

/**
 * _strspn - gets lenght of a prefix substring
 * @s: string to be scanned
 * @accept: characters
 * Return: int
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int l = 0;

	while (*s != '\0' && strchr(accept, *s) != NULL)
	{
		l++;
		s++;
	}
	return (l);
}
