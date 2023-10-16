#include <stdio.h>
#include "main.h"

/**
 * puts2 - prints every other character of a string
 * @str: actual string
 *
 * Return: void
 */

void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (i % 2 == 0)
		{
			printf("%c", str[i]);

		}
	}
	printf("\n");
}
