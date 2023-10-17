#include <string.h>
#include <stdio.h>
#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: input string
 *
 * Return: void
 */

void puts_half(char *str)
{
	int l, i, x;

	l = strlen(str);
	if (l % 2 != 0)
	{
		x = (l + 1) / 2;
	}
	else
	{
		x = l / 2;
	}
	for (i = x; i < l; i++)
	{
		printf("%c", str[i]);
	}
}
