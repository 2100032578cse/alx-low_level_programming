#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: the one pointer t use with b
 * @b: consyant byte
 * @n: number of bytes
 * Return: character type
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
