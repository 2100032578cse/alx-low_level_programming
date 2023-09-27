#include "main.h"

/**
 * _puts_recursion - prints astring
 * @s: string to print
 * Return: nothig
*/
void _puts_recursion(char *s)
{
	if (*s == '\0')
		_putchar('\n');
	_putchar(*s);
	s++;
	_puts_recursion(s);
}
