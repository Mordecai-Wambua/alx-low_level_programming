#include "main.h"
/**
 * print_triangle - prints a triangle
 * @size: size of the triangle
 *
 * Return: 0 -success
 */
void print_triangle(int size)
{
	int x, y;

	if (size > 0)
	{
		for (x = 1; x <= size; x++)
		{
			for (y = 1; y <= size - x; y++)
			{
				_putchar(' ');
			}
			for (z = 1; z <= x; z++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
	return (0);
}
