#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints minimum number of coins to make change
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: always zero
 */

int main(int argc, char *argv[])
{
	int cents, c25, c10, c5, c2, c1, n;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);

	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}

	c25 = cents / 25;
	cents %= 25;
	c10 = cents / 10;
	cents %= 10;
	c5 = cents / 5;
	cents %= 5;
	c2 = cents / 2;
	cents %= 2;
	c1 = cents;

	n = c25 + c10 + c5 + c2 + c1;
	printf("%d\n", n);

	return (0);
}
