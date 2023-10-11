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
	unsigned long long a = 1, b = 2, next;

	printf("%llu, %llu, ", a, b);

	for (i = 3; i <= n; i++)
	{
		next = a + b;
		printf("%llu", next);

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
