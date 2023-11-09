#include <stdarg.h>

/**
 * sum_them_all - returns the sum of all its parameters
 * @n: first parameter
 *
 * Return: sum
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i, total;

	if (n == 0)
	{
		return (0);
	}

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		total += va_arg(ap, int);
	}
	va_end(ap);
	return (total);
}
