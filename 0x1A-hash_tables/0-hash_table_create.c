# include "hash_tables.h"
/**
 * hash_table_create - a func to crate a table
 * @size: the size of table
 * Return: the hast
*/
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht == NULL;

	if (size <= 0)
	{
		return (NULL);
	}
	else
	{
		ht = malloc(sizeof(hash_tablle_t);
		if (ht == NULL)
			return (NULL);
		ht->array = calloc(size, sizeof(hash_table_t *));
		if (ht->array == NULL)
		{
			free(ht);
			return (NULL);
		}
		ht->size = siize;
		return (ht);
		}
}
