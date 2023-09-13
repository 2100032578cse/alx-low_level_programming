#include "main.h"
/**
 * print_times_table - Prints the times n table,
 * starting with 0.
 * @n: The value of the times table to be printed.
 */
void print_times_table(int n)
{
	int d, mult, ans;

	if (n <= 15 && n >= 0)
	{
		for (d = 0; d <= n; d++)
		{
			_putchar('0');
			for (mult = 1; mult <= n; mult++)
			{
				_putchar(',');
				_putchar(' ');
				ans = d * mult;
				if (ans <= 99)
					_putchar(' ');
				if (ans <= 9)
					_putchar(' ');
				if (ans >= 100)
				{
					_putchar((ans / 100) + '0');
					_putchar((ans / 10) % 10 + '0');
				}
				else if (ans <= 99 && ans >= 10)
				{
					_putchar((ans / 10) + '0');
				}
				_putchar((ans % 10) + '0');
			}
			_putchar('\n');
		}
	}
}
