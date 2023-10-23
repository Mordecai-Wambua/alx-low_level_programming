#include "main.h"
#include <string.h>
#include <stddef.h>

/**
 * _strstr - locates a substring
 * @haystack: pointer to larger string
 * @needle: pointer to substring
 *
 * Return: char
 */

char *_strstr(char *haystack, char *needle)
{
	char *h = haystack, *n = needle;

	while (*haystack != '\0')
	{
		while (*n != '\0' && *h == *n)
		{
			h++;
			n++;
		}
		if (*n == '\0')
		{
			return (haystack);
		}
		haystack++;
	}
	return (NULL);
}
