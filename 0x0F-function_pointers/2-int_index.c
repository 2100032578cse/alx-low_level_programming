#include "function_pointers.h"
/**
 * int_index - function that searches for an integer.
 * @array: array to use
 * @size: array size
 * @cmp: is a pointer to the function to be used to compare values
 * Return: eturns the index of the first element for which
 * the cmp function does not return 0
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array != NULL && cmp != NULL)
	{
		i = 0;
		while (i < size)
		{
			if (cmp(array[i]) != 0)
			{
				return (i);
			}
			i++;
		}
	}
	return (-1);
}
