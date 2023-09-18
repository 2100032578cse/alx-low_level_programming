#include "main.h"

/**
  * rev_string - Prints a string in reverse
  * @s: The string to print
  *Return: nothing
*/
void rev_string(char *s)
{
	int len = 0;
	int lenN;

	while (s[len] != '\0')
	{
		len++;
	}
	lenN = len - 1;

	while (lenN >= 0)
	{
		_putchar(s[lenN]);
		lenN--;
	}

	_putchar('\n');
}
