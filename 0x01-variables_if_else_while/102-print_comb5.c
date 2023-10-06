#include <stdio.h>
/**
 * main- Entry point
 *
 * Description: print all possible combinations of 2 digit numbers
 *
 * Return: 0 -successful
 */
int main(void)
{
	int x, y;

	for (x = 0; x < 100; x++)
	{
	for (y = x + 1; y < 100; y++)
	{
		putchar('0' + x / 10);
		putchar('0' + x % 10);
		putchar(' ');
		putchar('0' + y / 10);
		putchar('0' + y % 10);
		if (x == 98 && y == 99)
		{
			break;
		}
		putchar(',');
		putchar(' ');
	}
	}
	putchar('\n');
	return (0);
}
