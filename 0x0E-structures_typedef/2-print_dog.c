#include "dog.h"
#include <stdio.h>
#include <stddef.h>

/**
 * print_dog - prints a struct dog
 * @d: actual structure
 *
 * Return:void
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: %s\n", (d->name == NULL) ? "(nil)" : d->name);
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", (d->owner == NULL) ? "(nil)" : d->owner);
	}
}
