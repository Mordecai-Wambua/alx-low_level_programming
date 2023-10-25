#include "main.h"

int helper(int, int);
/**
 * is_prime_number - returns q if the integer is prime else 0
 * @n: entered integer
 *
 * Return: int
 */

int is_prime_number(int n)
{
	int c = 2;

	if (n <= 1)
	{
		return (0);
	}
	else if (n == 2)
	{
		return (1);
	}
	return (helper(n, c));
}

/**
 * helper - actual recursion
 * @n: number
 * @c: divisibility checker
 *
 * Return: int
 */

int helper(int n, int c)
{
	if (c == (n - 1))
	{
		return (1);
	}
	else if (n % c == 0)
	{
		return (0);
	}
	if (n % c != 0)
	{
		return (helper(n, c + 1));
	}
	return (0);
}
