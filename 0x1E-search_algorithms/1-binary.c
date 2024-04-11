#include "search_algos.h"

/**
 * binary_search - func to perform bin search
 * @array: the array to be used
 * @size: the siuze of array
 * @value: the value index
 * Return: return index,when found or else -1
*/
int binary_search(int *array, size_t size, int value)
{
	size_t i, l = 0, r;

	if (array == NULL)
		return (-1);
	r = size - 1;
	while (r >= l)
	{
		printf("Searching in array: ");
		i = l;
		while (i < r)
		{
			printf("%d, ", array[i]);
			i++;
		}
		printf("%d\n", array[i]);
		i = l + (r - l) / 2;
		if (array[i] == value)
			return (i);
		if (array[i] > value)
			r = i - 1;
		else
			l = i + 1;
	}
	return (-1);
}
