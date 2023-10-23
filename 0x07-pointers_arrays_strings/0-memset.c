#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: actual array
 * @b: new constant value
 * @n: number of bytes
 * Return: char
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *ptr = s;

	while (n > 0)
	{
		*s = b;
		s++;
		n--;
	}
	return (ptr);
}
