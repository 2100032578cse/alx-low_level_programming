#include "main.h"

/**
 * puts_half - prints seconf half
 * @str: a string to print from
 * Return: nothing
*/
void puts_half(char *str)
{
	int n = 0, newN, i;

	while (str[n] != '\0')
	{
		n++;
	}
	if (n % 2 == 1)
	{
		newN = (n - 1) / 2;
	}
	else
	{
		newN = n / 2;
	}
	while (newN < n)
	{
		_putchar(str[newN]);
		newN++;
	}
	_putchar('\n');
}
