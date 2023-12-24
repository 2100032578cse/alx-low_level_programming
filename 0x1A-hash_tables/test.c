#include "hash_tables.h"
/**
 * hash_table_print - Prints a hash table.
 * @ht: A pointer to the hash table to print.
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	unsigned char flag = 0;
	hash_node_t *node;
	if (ht == NULL)
		return;
	printf("{");
	i = 0;
	while (i < ht->size)
	{
		if (ht->array[i] != NULL)
		{
			if (comma_flag == 1)
				printf(", ");
			node = ht->array[i];
			while (node != NULL)
			{
				printf("'%s': '%s'", node->key, node->value);
				node = node->next;
				if (node != NULL)
					printf(", ");
			}
			flag = 1;
		}
		i++;
	}
	printf("}\n");
}
