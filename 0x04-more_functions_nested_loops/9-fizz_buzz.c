#include "main.h"
#include <stdio.h>
/**
 * main -entry point
 *
 * Return: 0-success
 */
int main(void)
{
	int x, y;

	for (x = 1; x <= 100; x++)
	{
		if (x % 3 == 0 && x % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (x % 5 == 0)
		{
			printf("Buzz ");
		}
		else if (x % 3 == 0)
		{
			printf("Fizz ");
		}
		else
		{
			_putchar('0' + x);
		}
		_putchar('\n');
	}
	return (0);
}
