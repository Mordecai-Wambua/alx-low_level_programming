#include "dog.h"
#include <string.h>
#include <stddef.h>
#include <stdlib.h>

/**
 * new_dog - creates a new dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog owner's name
 *
 * Return: dog or NULL
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	char *new_name, *new_owner;
	int name_len, owner_len, i;

	new_dog = malloc(sizeof(dog_t));

	if (new_dog == NULL)
		return (NULL);
	name_len = 0;
	while (name[name_len])
		name_len++;
	owner_len = 0;
	while (owner[owner_len])
		owner_len++;
	new_name = malloc(sizeof(char) * (name_len + 1));
	if (new_name == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	new_owner = malloc(sizeof(char) * (owner_len + 1));
	if (new_owner == NULL)
	{
		free(new_name);
		free(new_dog);
		return (NULL);
	}
	for (i = 0; i <= name_len; i++)
		new_name[i] = name[i];
	for (i = 0; i <= owner_len; i++)
	{
		new_owner[i] = owner[i];
		new_dog->name = new_name;
	}
	new_dog->age = age;
	new_dog->owner = new_owner;
	return (new_dog);
}
