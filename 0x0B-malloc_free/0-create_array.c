#include "main.h"

/**
 * create_array - creates the array and initializes it
 * with a specific char.
 * @size: size of memory
 * @c: the specific char
 * Return: a pointer to the array, or NULL if it fail.
*/
char *create_array(unsigned int size, char c)
{
	char *ar;
	int i;

	if (size == 0)
		return (NULL);
	ar = malloc(size * sizeof(char));
	i = 0;
	while (i < size)
	{
		ar[i] = c;
		i++;
	}
	if (ar == NULL)
		return (NULL);
	return (ar);


}
