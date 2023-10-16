#include "main.h"

/**
 * rev_string - reverses a string
 * @s: actual string
 *
 * Return: void
 */

void rev_string(char *s)
{
	char *e = s;
	char tmp;

	if (*s)
	{
		while (*e)
		{
			++end;
		}
		--end;
		while (s < e)
		{
			tmp = *s;
			*s++ = *e;
			*e-- = tmp;
		}
	}
}
