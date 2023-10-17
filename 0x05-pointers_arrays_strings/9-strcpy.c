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
	int i = 0;

	while (src[i] != '\0')
	{
		*(dest + 1) = *src[i];
		i++;
	}
	*(dest + i) = '\0';
	return (dest);
}
