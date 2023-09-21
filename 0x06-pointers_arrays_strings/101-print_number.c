#include "main.h"

/**
* print_number - prints a number n
* @n: a number to printed
* Return: nothing
*/
void print_number(int n)
{
/*	unsigned int newN = n;*/

	if (n < 0)
	{
		_putchar('-');
		/*newN = newN * -1;*/
		n = -n;
	}

	if ((n / 10) > 0)
		print_number(n / 10);
	_putchar((n % 10) + '0');
}
