#include "main.h"

/**
*print_line - prints a straight line
*@n: shows how many times to print _
*Return: nothing
*/
void print_line(int n)
{
	while (n-- > 0)
	{
		_putchar('_');
	}
	_putchar('\n');
}
