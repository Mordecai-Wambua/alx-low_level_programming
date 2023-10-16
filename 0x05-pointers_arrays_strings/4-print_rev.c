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
	int l = 0;

	while (s[l])
	{
		l++;
	}
	while (l--)
	{
		putchar(s[l];
	}
		putchar('\n');
}
