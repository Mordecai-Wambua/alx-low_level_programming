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
	int i, l;

	if (min > max)
	{
		return (NULL);
	}
	l = (max - min) + 1;

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
