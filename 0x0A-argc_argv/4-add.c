#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

/**
 * main - adds positive numbers
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: always zero
 */

int main(int argc, char *argv[])
{
	int x, l = 0, y;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}
	for (x = 1; x < argc; x++)
	{
		char *a = argv[x];

		for (y = 0; a[y] != '\0'; y++)
		{
			if (!isdigit(a[y]))
			{
				printf("Error\n");
				return (1);
			}
		}
		l += atoi(a);
	}
	printf("%d\n", l);

	return (0);
}
