#include "main.h"

/**
 * swap_int - swaps the values of 2 integers
 * @a: memory address of a
 * @b: memory address of b
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
