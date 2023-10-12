#include "main.h"
/**
 * print_line - draws a straight line
 * @n: number of times _ should be printed
 *
 * Return: 0-sucess
 */
void print_line(int n)
{
	int x;

	if (n > 0)
	{
		for (x = 0; x < n; x++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
	else
		_putchar('\n');
}

