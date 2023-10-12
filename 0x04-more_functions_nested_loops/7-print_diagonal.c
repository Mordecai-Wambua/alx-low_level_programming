#include "main.h"
/**
 * print_diagonal - draws a diagonal line
 * @n: number of times to print '\'
 *
 * Return: 0-success
 */
void print_diagonal(int n)
{
	int x;

	if (n > 0)
	{
		for (x = 0; x < n; x++)
		{
			for (y = 0; y < x; y++)
			{
			_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
