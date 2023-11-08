#include "function_pointers.h"

/**
 * array_iterator - executes a given function as a parameter
 * on each element of an array
 * @array: actual array
 * @size: array size
 * @action: function pointer
 *
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
