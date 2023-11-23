#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to strind of 0s and 1s
 *
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int a = 0, i;

	if (b == NULL)
	{
		return (0);
	}

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}
		a = 2 * a + (b[i] - '0');
	}
	return (a);
}
