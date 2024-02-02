#include "hash_tables.h"

/**
 * *hash_table_create - creates a hash table
 * @size: Array size
 *
 * Return: pointer to newly created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;
	unsigned long int a;

	table = malloc(sizeof(hash_table_t));
	if (table == NULL)
	{
		return (NULL);
	}

	table->size = size;
	table->array = malloc(size * sizeof(hash_node_t *));
	
	if (table->array == NULL)
	{
		free(table);
		return (NULL);
	}

	for(a = 0; a < size; a++)
	{
		table->array[a] = NULL;
	}
	return (table);
}
