#include "main.h"
/**
 * array_range - creates array of integers
 * @min: minimum value
 * @max: maximum element
 * Return: nothing
*/
int *array_range(int min, int max)
{
	int *arr;
	int i = 0;

	if (min > max)
		return (NULL);
	arr = malloc(sizeof(*arr) * ((max - min) + 1));
	if (arr == NULL)
		return (NULL);
	while (min <= max)
	{
		arr[i] = min;
		i++;
		min++;
	}
	return (arr);
}
