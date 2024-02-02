#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 * @ht: pointer to the target hash table
 * @key: pointer to the key
 * @value: pointer to actual value
 *
 * Return: 1 success, 0 failure
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *table;
	char *val;
	unsigned long int idx, counter;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);
	val = strdup(value);
	if (val == NULL)
		return (0);

	idx = key_index((const unsigned char *)key, ht->size);
	for (counter = idx; ht->array[counter]; counter++)
	{
		if (strcmp(ht->array[counter]->key, key) == 0)
		{
			free(ht->array[counter]->value);
			ht->array[counter]->value = val;
			return (1);
		}
	}

	table = malloc(sizeof(hash_node_t));
	if (table == NULL)
	{
		free(val);
		return (0);
	}
	table->key = strdup(key);
	if (table->key == NULL)
	{
		free(table);
		return (0);
	}
	table->value = val;
	table->next = ht->array[idx];
	ht->array[idx] = table;

	return (1);
}


