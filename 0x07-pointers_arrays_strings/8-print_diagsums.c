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
		sum1 += a[i * size + 1];
		sum2 += a[i * size + (size - 1 - i)];
	}
	printf("%d, %d \n", sum1, sum2);
}
