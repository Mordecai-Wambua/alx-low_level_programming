#include <stdio.h>

/**
 * main - entry point
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: always zero
 */

int main(int argc, char *argv[])
{
	if (argc < 1)
	{
		printf("Invalid\n");
	}
	printf("%s\n", argv[0]);

	return (0);
}
