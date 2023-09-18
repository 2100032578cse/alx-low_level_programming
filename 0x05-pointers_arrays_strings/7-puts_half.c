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
		newN = NewN + 1;
	}
	else
	{
		newN = n / 2;
	}
	for (i = newN; i < n; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
