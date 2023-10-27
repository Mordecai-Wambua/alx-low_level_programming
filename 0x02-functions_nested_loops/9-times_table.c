#include "main.h"
/**
 * times_table - print the 9 times table
 *
 * Return: 0-success
 */
void times_table(void)
{
	int x, y, z;

	for (x = 0; x < 10; x++)
	{
		for (y = 0; y < 10; y++)
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
				_putchar('0' + z);
			}
			else
			{
				_putchar(' ');
				_putchar('0' + z / 10);
				_putchar('0' + z % 10);
			}
			if (y < 9)
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
