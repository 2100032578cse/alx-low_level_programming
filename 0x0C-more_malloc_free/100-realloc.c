#include "main.h"

/**
 * _realloc - reallocates a memory block
 * using malloc and free
 * @ptr: is a pointer to the memory previously allocated
 * @old_size: the size, in bytes, of the allocated space for ptr
 * @new_size:  the new size, in bytes of the new memory block
 * Return: nothing
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (ptr == NULL)
		ptr = malloc(new_size);
	if (new_size == 0)
	{
		if (ptr != NULL)
		{
			free(ptr);
			return (NULL);
		}
	}
	if (new_size == old_size)
		return (ptr);
	free(ptr);
	ptr = malloc(new_size);
	return (ptr);
}
