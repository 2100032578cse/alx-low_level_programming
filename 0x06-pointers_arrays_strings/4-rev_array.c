#include "main.h"

/**
 * reverse_array - reverses array
 * @a: array to revise
 * @n: number of elements in a
 * Return: nothing
*/
void reverse_array(int *a, int n)
{
	int i, j;
	char b[];

	for (i = n - 1, j = 0; i >= 0, j < n ; i--, j++)
	{
		b[j] = a[i];
	}
	for (k = 0; k < n; k++)
	{
		a[k] = b[k];
	}
}
