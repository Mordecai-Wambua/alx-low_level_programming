#include "search_algos.h"

/**
 * printer - prints out the portion of array being searched
 * @array: pointer to first array element
 * @a: lowest index
 * @b: highest index
 */
void printer(int *array, size_t a, size_t b)
{
	printf("Searching in array: ");

	for (a = a; a <= b; a++)
	{
		printf("%d", array[a]);
		if (a <= b - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}


/**
 * binary_search - searches for a value in array
 * @array: pointer to first array element
 * @size: number of array elements
 * @value: target element
 *
 * Return: index of first occurrence of target
 */
int binary_search(int *array, size_t size, int value)
{
	size_t a = 0, b = (size - 1), mid;

	while (a <= b)
	{
		printer(array, a, b);
		mid = a + (b - a) / 2;
		if (array[mid] == value)
			return (mid);
		if (array[mid] < value)
			a = mid + 1;
		else
			b = mid - 1;
	}
	return (-1);
}
