#include <stdio.h>
#include "main.h"

/**
 * print_rev - prints a string in  reverse
 * @s: actual string
 *
 * Rturn: void
 */

void print_rev(char *s)
{
	int l = strlen(s);
	int i;

	for (i = l - 1; i >= 0; i--)
	{
		putchar(s[i]);
	}
	putchar('\n');
}
