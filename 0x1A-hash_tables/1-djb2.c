#include "hash_tables.h"
/**
 * hash_djb2 - function implementing the djb2 algorithm
 * @str: string to use
 * Return: integer
*/
unsigned long int hash_djb2(const unsigned char *str)
{
	int i;
	unsigned long int h = 5381;

	while ((i = *str++))
	{
		h = ((h << 5) + h) + i;
	}
	return (h);
}
