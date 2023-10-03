#include "main.h"

/**
* alloc_grid -  returns a pointer to a 2 dimensional
* array of integers.
* @width: width of an array
* @height: height of array
* Return: pointer to the arr
*/
int **alloc_grid(int width, int height)
{
	int **arr;
	int i = 0, j;

	if (width == 0 || height == 0)
		return (NULL);
	arr = (int **) malloc(sizeof(int *) * height);
	if (arr == NULL)
	{
		return (NULL);
	}
	else
	{
		while (i < height)
		{
			arr[i] = (int *) malloc(width * sizeof(int));
			if (arr[i] != NULL)
			{
				for (j = 0; j < width; j++)
					arr[i][j] = 0;
			}
			else
			{
				while (i >= 0)
				{
					free(arr[i]);
					i--;
				}
				free(arr);
				return (NULL);
			}
			i++;
		}
		return (arr);

	}
}
