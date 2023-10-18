#include "main.h"

/**
 * reverse_array - reverse the content of an array
 * @a: array
 * @n: number of elements in the array
 * Return:void
 */

void reverse_array(int *a, int n)
{
	int tmp[n];
	int i = 0;
	int y;
	int z = 0;

	for (y = (n - 1); y >= 0; y--)
	{
		tmp[y] = a[i];
		i++;
	}
	for (y = 0; y < n; y++)
	{
		a[y] = tmp[z];
		z++;
	}
}
