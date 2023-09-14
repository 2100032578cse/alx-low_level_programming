#include "main.h"

/**
 * print_diagonal -prints a diagonal line
 * @n: the number of times the character \ should be printed
 * Return: return nothing
*/
void print_diagonal(int n)
{
	int i, j;

	while (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < i; j++)
			{
				_putchar(' ');
			}
			_putchar('\\');
		}
		_putchar('\n');
	}
	_putchar('\n');
}
