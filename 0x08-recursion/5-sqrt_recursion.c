#include "main.h"

int _sqrt(int a, int b);
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: actual number
 *
 * Return: int
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0 || n == 1)
	{
		return (n);
	}
	else
	{
		return (_sqrt(n, 1));
	}
}

/**
 * _sqrt - recursion
 * @a: n
 * @b: 1
 *
 * Return: int
 */

int _sqrt(int a, int b)
{
	if (b * b == a)
	{
		return (b);
	}
	else if (b * b > a)
	{
		return (-1);
	}
	else
	{
		return (_sqrt(a, b + 1));
	}
}
