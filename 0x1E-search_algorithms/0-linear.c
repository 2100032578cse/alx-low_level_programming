#include "search_algos.h"
/**
 * linear_search - the func for linear serach
 * @array: array bto be used
 * @size: size of array
 * @value: the index
 * Return: return index or -1
*/
int linear_search(int *array, size_t size, int value)
{
	int i = 0;

	if (array == NULL)
		return (-1);
	while (i < size)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
		i++;
	}
	return (-1);
}
