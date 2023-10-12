#include "main.h"
/**
 * print_most_numbers- print numbers 0-9 excluding 2 and 4
 *
 * Return: 0 -success
 */
void print_most_numbers(void)
{
	int x;

	for (x = 0; x < 10; x++)
	{
		if (x != 2 && x != 4)
		{
			_putchar('0' + x);
		}
	}
	_putchar('\n');
}
