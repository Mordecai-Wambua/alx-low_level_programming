#include "main.h"
#include <stdio.h>
/**
 * main- enrty
 *
 * Return: 0-success
 */
int main(void)
{
	int x = 0;
	int y = 0;

	while (x < 1024)
	{
		if (x % 3 == 0 || x % 5 == 0)
		{
			y += x;
		}
		x++;
	}
	printf("%i\n", y);
	return (0);
}
