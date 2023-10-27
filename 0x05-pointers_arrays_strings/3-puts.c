#include <stdio.h>
#include "main.h"

/**
 * _puts - print a string
 * @str: actual string
 *
 * Return: void
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		putchar(*str);
		str++;
	}
	putchar('\n');
}
