#include "hash_tables.h"
/**
 * key_index - the func to key index
 * @key: is the key
 * @size: size of array
 * Return: none'
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
