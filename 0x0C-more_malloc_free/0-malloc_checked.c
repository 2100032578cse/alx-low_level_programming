#include "main.h"
/**
 * malloc_checked - allocates memory using malloc
 * @b: size of memory
 * Return: nothing
*/
void *malloc_checked(unsigned int b)
{
	char *memory;

	memory = malloc(b);
	if (memory == NULL)
		exit(98);
	return (memory);
}
