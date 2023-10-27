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
	int a, rep, b;

	if (n <= 0 || n > 15)
		return;
	while (a <= n)
{
	for (b = 0; b <= n; b++)
	{
		rep = a * b;
		if (b == 0)
			_putchar('0' + rep);
		else if (rep < 10)
		{
			_putchar(' ');
			_putchar(' ');
			_putchar('0' + rep);
		}
		else if (rep < 100)
		{
			_putchar(' ');
			_putchar('0' + rep / 10);
			_putchar('0' + rep % 10);
		}
		else
		{
			_putchar('0' + rep / 100);
			_putchar('0' + (rep - 100) / 10);
			_putchar('0' + rep % 10);
		}
		if (b < n)
		{
			_putchar(',');
			_putchar(' ');
		}
	}
	_putchar('\n');
	a++;
}
}
