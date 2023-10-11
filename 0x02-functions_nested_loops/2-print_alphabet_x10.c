#include "main.h"
/**
 * print_alphabet_x10 - entry point
 *
 * Description: print the alphabet in lowercase 10 times
 *
 * Return: always 0
 */
void print_alphabet_x10(void)
{
	int x;
	char c;

	for (x = 0; x < 10; x++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}
