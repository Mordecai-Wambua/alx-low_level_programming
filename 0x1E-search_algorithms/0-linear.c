#include "search_algos.h"
/**
 * linear_search - searches for a value in array
 * @array: pointer to first array element
 * @size: number of array elements
 * @value: target element
 *
 * Return: index of first occurrence of target
 */
int linear_search(int *array, size_t size, int value)
{
	size_t a;

	for (a = 0; a < size; a++)
	{
		printf("Value checked array[%ld] = [%d]\n", a, array[a]);
		if (value == array[a])
			return (a);
	}
	return (-1);
}
