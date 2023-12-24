#include "hash_tables.h"
/**
 * hash_table_delete - deletes table.
 * @ht: A pointer to the hash table.
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_table_t *h = ht;
	hash_node_t *node, *curr;
	unsigned long int i = 0;

	while (i < ht->size)
	{
		if (ht->array[i] != NULL)
		{
			node = ht->array[i];
			while (node != NULL)
			{
				curr = node->next;
				free(node->key);
				free(node->value);
				free(node);
				node = curr;
			}
		}
		i++;
	}
	free(h->array);
	free(h);
}
