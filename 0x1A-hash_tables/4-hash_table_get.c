#include "hash_tables.h"
/**
 * hash_table_get - get value of key
 * @ht: head pointer
 * @key: the key used
 * Return: head eles
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *node;
	unsigned long int index;

	if (ht == NULL)
		return (NULL);
	if (hkey == NULL)
		return (NULL);
	if (*key == '\0')
		return (NULL);
	index = key_index((const unsigned char *)key, ht->size);
	if (index >= ht->size)
		return (NULL);
	node = ht->array[index];
	while (node && strcmp(node->key, key) != 0)
		node = node->next;
	if (node == NULL)
	{
		return (NULL);
	}
	else
	{
		return (node->value);
	}
}
