#include "main.h"

/**
 * leet - encodes a string to 1337
 * @s: actual string
 *
 * Return: char
 */

char *leet(char *s)
{
	int i, j;
	char *val = "aAeEoOtTlL";
	char *now = "4433007711";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; val[j] != '\0'; j++)
		{
			if (s[i] == val[j])
			{
				s[i] = now[j];
				break;
			}
		}
	}
	return (s);
}
