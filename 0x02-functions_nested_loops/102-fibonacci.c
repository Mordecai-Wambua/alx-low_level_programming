#include <stdio.h>
/**
 * main-entry
 *
 * Return: 0-success
 */
int main(void)
{
	int x = 50;
	int i;
	unsigned long a = 1, b = 2, next;

	printf("%lu, %lu, ", a, b);

	for (i = 3; i <= x; i++)
	{
		next = a + b;
		printf("%lu", next);

		if (i < x)
		{
			printf(", ");
		}
		else
		{
			printf("\n");
		}

		a = b;
		b = next;
	}
	return (0);
}
