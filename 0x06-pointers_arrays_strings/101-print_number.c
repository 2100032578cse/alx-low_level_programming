#include "main.h"

/**
* print_number - prints a number n
* @n: a number to printed
* Return: nothing
*/
void print_number(int n)
{
	unsigned int newN = n;

	if (n < 0)
	{
		newN = -newN;
		_putchar('-');
	}
	if (newN / 10 > 0)
	{
		print_number(newN / 10);
	}
	_putchar(newN % 10 + '0');
}
