#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: destination memory location
 * @src: source memory location
 * @n: number of bytes to be copied
 * Return: char
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *org = dest;

	while (n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}
	return (org);
}
