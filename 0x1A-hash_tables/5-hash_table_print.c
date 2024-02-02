#include "hash_tables.h"

/**
 * hash_table_print - prints specified hash table contents
 * @ht: pointer to specific hash table
 *
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *node;
	int prt = 0;

	if (ht == NULL)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];

		while (node != NULL)
		{
			if (prt)
				printf(", ");

			printf("'%s': '%s'", node->key, node->value);
			node = node->next;

			if (prt == 0)
				prt = 1;
		}
	}
	printf("}\n");
}
