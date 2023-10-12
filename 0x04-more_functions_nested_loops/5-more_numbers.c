#include "main.h"
/**
 * more_numbers - print numbers 0-14 ten times
 *
 * Return: 0 -success
 */
void more_numbers(void)
{
	int x, y;

	for (y = 0; y < 10; y++)
	{
		for (x = 0; x < 15; x++)
		{
			_putchar('0' + x);
		}
		_putchar('\n');
	}
}
