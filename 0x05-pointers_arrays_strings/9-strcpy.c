#include "main.h"

/**
 * _strcpy - copies the string pointed to by src
 * @dest: array name
 * @src: actual string
 *
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	while (*str != '\0')
	{
		*dest = *str;
		dest++;
		str++;
	}
	*dest = '\0';
	return (dest);
}
