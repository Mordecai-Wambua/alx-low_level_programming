#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: pointer to hash table to be checked
 * @key: poiter to key being sought
 *
 * Return: associated value or NULL
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *node;
	unsigned long int c;

	if (ht == NULL || key == NULL || strlen(key) == 0)
		return (NULL);

	c = key_index((unsigned char *)key, ht->size);

	if (ht->array[c] == NULL || ht->array[c] == 0)
		return (NULL);

	if (strcmp(ht->array[c]->key, key) == 0)
		return (ht->array[c]->value);
	node = ht->array[c];
	while (node != NULL)
	{
		if (strcmp(node->key, key) == 0)
			return (node->value);
		node = node->next;
	}
	return (NULL);
}
