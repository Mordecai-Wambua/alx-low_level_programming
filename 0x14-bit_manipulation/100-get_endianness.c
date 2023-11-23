#include "main.h"

/**
 * get_endianness - checks the endianness
 *
 * Return: 0 or 1
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	if (*c == 1)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
