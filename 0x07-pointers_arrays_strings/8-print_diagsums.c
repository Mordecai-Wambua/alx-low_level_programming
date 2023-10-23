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
	int sum1 = 0, sum2 = 0, i;

	for (i = 0; i < size; i++)
	{
		sum1 += a[i * size + i];
		sum2 += a[i * size + (size - i - 1)];
	}
	printf("%i, %i \n", sum1, sum2);
}
