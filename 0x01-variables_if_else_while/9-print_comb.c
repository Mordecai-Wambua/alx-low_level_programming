#include <stdio.h>
/**
 * main- Entry point
 *
 * Description: print all possible combinations of single-digit number
 *
 *
 * Return: 0-successful
 */
int main(void)
{
	int x = 0;
	int y = 0;

	for (x = 0; x < 10; x++)
	{
		for (y = 0; y < 10; y++)
			putchar('0' + x);
		putchar('0' + y);
		putchar(',');
		putchar(' ');
	}
	return (0);
}
