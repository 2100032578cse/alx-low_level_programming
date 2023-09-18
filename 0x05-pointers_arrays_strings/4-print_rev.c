#include "main.h"
#include <stdio.h>

/**
  * print_rev - Prints a string in reverse
  * @s: The string to print
  *Return: nothing
*/
void print_rev(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	int lenN = len - 1;

	while (lenN >= 0)
	{
		_putchar(s[lenN]);
		lenN--;
	}

	_putchar('\n');
}
