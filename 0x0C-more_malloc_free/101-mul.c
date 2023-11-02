#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int validity(char *);

/**
 * main - multiplies two positive numbers
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 = success, 98 = fail
 */

int main(int argc, char *argv[])
{
	int mul, num0, num1;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	if (!validity(argv[1]) || !validity(argv[2]))
	{
		printf("Error\n");
		exit(98);
	}

	num0 = atoi(argv[1]);
	num1 = atoi(argv[2]);

	mul = num0 * num1;
	printf("%d\n", mul);

	return (0);
}

/**
 * validity - checks if inputs are numbers
 * @str: input
 *
 * Return: 1 = valid, 0 = invalid
 */

int validity(char *s)
{
	int i;

	for (i = 0; s[i]; i++)
	{
		if (!isdigit(s[i]))
		{
			return (0);
		}
	}
	return (1);
}
