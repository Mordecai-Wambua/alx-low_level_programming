#include "main.h"

/**
 * flip_bits - returns number of bits you would need to flip
 * to get from one number to another
 * @n: first int
 * @m: second int
 *
 * Return: number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int a = sizeof(unsigned long int) * 8;
	unsigned int b = 0;

	while (a > 0)
	{
		b += (n >> a & 1) != (m >> a & 1);
		a--;
	}
	return (b);
}
