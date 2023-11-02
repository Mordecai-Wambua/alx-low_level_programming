#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: minimum integer value
 * @max: maximum integer value
 *
 * Return: NULL or pointer to the array
 */

int *array_range(int min, int max)
{
	int *array;
	int i, l = (max - min) + 1;

	if (min > max)
	{
		return (NULL);
	}

	array = malloc(sizeof(int) * l);
	if (array == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < (max + 1); i++)
	{
		array[i] = min;
		min++;
	}
	return (array);
}
