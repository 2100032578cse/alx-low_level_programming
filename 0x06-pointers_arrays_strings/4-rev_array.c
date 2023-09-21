#include "main.h"

/**
 * reverse_array - reverses array
 * @a: array to revise
 * @n: number of elements in a
 * Return: nothing
*/
void reverse_array(int *a, int n)
{
	int i, c, j;

	j = n - 1;
	c = 0;
	while (c <= j)
	{
		i = a[c];
		a[c++] = a[j];
		a[j--] = i;
	}
}
