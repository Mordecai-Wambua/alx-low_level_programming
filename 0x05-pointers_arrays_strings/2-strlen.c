#include "main.h"

/**
 * _strlen - print length of a string
 * @s: entered value
 *
 * Return: integer
 */

int _strlen(char *s)
{
	int l = 0;

	while (*s != '\0')
	{
		l++;
		s++;
	}
	return (l);
}
