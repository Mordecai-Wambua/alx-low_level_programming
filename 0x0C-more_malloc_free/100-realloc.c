#include "main.h"
#include <stdlib.h>

/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to prevoius memory
 * @old_size: size of the prt memory
 * @new_size: size of ne memory block
 *
 * Return: void
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *newmem;
	unsigned int i, min_size;

	if (ptr == NULL)
	{
		return (malloc(new_size));
	}
	else if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	else if (new_size == old_size)
	{
		return (ptr);
	}

	newmem = malloc(new_size);

	if (newmem == NULL)
	{
		return (NULL);
	}
	min_size = old_size < new_size ? old_size : new_size;
	for (i = 0; i < min_size; i++)
	{
		((char *)newmem)[i] = ((char *)ptr)[i];
	}
	free(ptr);
	return (newmem);
}

