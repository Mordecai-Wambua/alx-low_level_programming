#include "main.h"
/**
 * more_numbers - print numbers 0-14 ten times
 *
 * Return: 0 -success
 */
void more_numbers(void)
{
	int x, y;

	for (x = 0; x < 10; x++)
	{
		for (y = 0; y < 15; y++)
		{
			if (y > 9)
			{
				_putchar('0' + (y / 10));
			}
			_putchar('0' + (y % 10));
		}
		_putchar('\n');
	}
}
