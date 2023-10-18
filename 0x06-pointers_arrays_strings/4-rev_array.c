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

	for (y = (n - 1); y >= 0; y--)
	{
		tmp[y] = a[i];
		i++;
	}
	i = 0;
	for (y = 0; y < n; y++)
	{
		a[y] = tmp[i];
		i++;
	}
}
