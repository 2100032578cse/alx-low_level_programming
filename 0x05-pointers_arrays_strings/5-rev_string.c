#include "main.h"

/**
  * rev_string - Prints a string in reverse
  * @s: The string to print
  *Return: nothing
*/
void rev_string(char *s)
{
	int i, count, k;
	char *arr, p;

	arr = s;
	count = 0;
	while (s[count] != '\0')
	{
		count++;
	}

	for (k = 1; k < count; k++)
	{
		arr++;
	}
	i = 0;
	while (i < (count / 2))
	{
		p = s[i];
		s[i] = *arr;
		*arr = p;
		arr--;
		i++;
	}
}
