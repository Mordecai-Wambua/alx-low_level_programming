#include <stdio.h>
/**
 * main- Entry point
 *
 * Description: print all possible combinations of 2 digits
 *
 * Return: 0-successful
 */
int main(void)
{
	int x, y;

	for (x = 0; x < 10; x++)
	{
		for (y = x + 1; y < 10; y++)
		{
			putchar('0' + x);
			putchar('0' + y);
			if (x == 8 && y == 9)
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
