#include "main.h"
/**
 * print_diagsums - prints the sums of the two diagonals of a square matrix
 * @a: matrix to use
 * @size: size of matrix
 * Return: npthing
*/
void print_diagsums(int *a, int size)
{
	int i, s1 = 0, s2 = 0;

	i = 0;
	while (i < size)
	{
		s1 = s1 + a[i];
		a = a + size;
		i++;
	}

	a = a - size;

	for (i = 0; i < size; i++)
	{
		s2 = s2 + a[i];
		a = a - size;
	}

	printf("%d, %d\n", s1, s2);
}
