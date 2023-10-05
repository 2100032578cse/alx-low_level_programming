#include "main.h"

/**
 * _calloc -  allocates memory for an array, using malloc
 * @nmemb: array
 * @size: size of memory
 * Return: nothing
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *mem;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	mem = malloc(nmemb * size);
	if (mem == NULL)
		return (NULL);
	i = 0;
	while (i < (nmemb * size))
	{
		mem[i] = 0;
		i++;
	}
	return (mem);
}
