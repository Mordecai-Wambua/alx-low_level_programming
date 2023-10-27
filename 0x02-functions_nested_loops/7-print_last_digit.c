#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 *
 * @n: number
 *
 * Return: 0-always
 *
 */
int print_last_digit(int n)
{
	int l;

	if (n < 0)
		l = (n % 10) * -1;
	else
		l = n % 10;
	_putchar('0' + l);
	return (l);
}
