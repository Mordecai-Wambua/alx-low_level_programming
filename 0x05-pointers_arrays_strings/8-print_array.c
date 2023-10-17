#include "main.h"
#include <stdio.h>

/**
 * print_array - print n elements of an array of integers
 * @a: actual array
 * @n: number of elements
 *
 * Return: void
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < (n - 1); i++)
	{
		printf("%d, ", a[i]);
	}
	printf("%d\n", a[n - 1]);
}
