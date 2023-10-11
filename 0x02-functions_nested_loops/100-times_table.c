#include "main.h"
/**
 * print_times_table - print a times table
 *
 * @n: entered number
 *
 * Return: 0-success
 */
void print_times_table(int n)
{
	int x, y, z;

	if (n <= 0 || n > 15)
	{
		return;
	}
	for (x = 0; x <= n; x++)
	{
		for (y = 0; y <= n; y++)
		{
			z = x * y;
			if (y == 0)
			{
				_putchar('0');
			}
			else if (z < 10)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + z);
			}
			else if (z < 100)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + z / 10);
				_putchar('0' + z % 10);
			}
			else
			{
				_putchar(' ');
				_putchar('0' + z / 100);
				_putchar('0' + (z - 100) / 10);
				_putchar('0' + z % 10);
			}
			if (y < n)
			{
			_putchar(',');
			}
			else
			{
			_putchar('\n');
			}
		}
	}
}
