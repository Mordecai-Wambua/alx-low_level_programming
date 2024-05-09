#include "search_algos.h"

/**
 * jump_search - searches for a value using jump search algorithm
 * @array: pointer to first array element
 * @size: number of array elements
 * @value: target value
 * Return: first index containing target
 */

int jump_search(int *array, size_t size, int value)
{
	size_t interval = sqrt(size), a, b;

	if (array == NULL || size == 0)
		return (-1);

	for (a = 0; a < size; a += interval)
	{
		if (value <= array[a])
		{
			printf("Value found between indexes [%ld] and [%ld]\n", a - interval, a);
			for (b = a - interval; b <= a; b++)
			{
				printf("Value checked array[%ld] = [%d]\n", b, array[b]);
				if (value == array[b])
				{
					return (b);
				}
			}
		}
		printf("Value checked array[%ld] = [%d]\n", a, array[a]);
	}
	return (-1);
}
