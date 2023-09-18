#include "main.h"

/**
 * puts2 - print other characte including first
 * @str: string to print from
 * Return: nothing
*/
void puts2(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
		i++;
	}
	_putchar('\n');
}
