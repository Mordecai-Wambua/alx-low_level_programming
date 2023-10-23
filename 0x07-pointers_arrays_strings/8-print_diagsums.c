#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of two diagonals of a matrix
 * @a: actual array
 * @size: the array size
 *
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int sum1 = 0, sum2 = 0, x;

	for (x = 0; x < size; x++)
	{
		sum1 += a[x];
		a += size;
	}
	a -= size;

	for (x = 0; x < size; x++)
	{
		sum2 += a[x];
		a -= size;
	}

	printf("%i, %i \n", sum1, sum2);
}
