#include "main.h"
/**
 * _abs - entry point
 *
 * Description: compute the absolute value of an integer
 * @n: integer to compute
 * Return: always 0
 */
int _abs(int n)
{
	if (n >= 0)
		return (n);
	else
		return (n * -1);
}
