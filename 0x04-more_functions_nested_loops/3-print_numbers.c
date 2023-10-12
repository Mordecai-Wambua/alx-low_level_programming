#include "main.h"
/**
 * print_numbers - prints numbers 0-9
 *
 * Return: 0-success
 */
void print_numbers(void)
{
	int x;

	for (x = 0; x < 10; x++)
	{
		_putchar('0' + x);
	}
	_putchar('\n');
	return (0);
}
