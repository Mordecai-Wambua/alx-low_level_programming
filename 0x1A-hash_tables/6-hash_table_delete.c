#include "hash_tables.h"

/**
 * hash_table_delete - deletes specified hash table
 * @ht: pointer to target hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *node, *temp;
	unsigned long int a;

	if (ht == NULL)
		return;

	for (a = 0; a < ht->size; a++)
	{
		node = ht->array[a];

		while (node != NULL)
		{
			temp = node->next;
			free(node->key);
			free(node->value);
			free(node);
			node = temp;
		}
	}
	free(ht->array);
	free(ht);
}
