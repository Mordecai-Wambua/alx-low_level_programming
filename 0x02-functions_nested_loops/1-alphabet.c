#include "main.h"
/**
 * print_alphabet - entry point
 *
 * Description: print alphabet in lowercase
 *
 * Return: 0-successful execution
 */
void print_alphabet(void)
{
	char a;

	for (a  = 'a'; a <= 'z'; a++)
	{
		_putchar(a);
	}
	_putchar('\n');
}
