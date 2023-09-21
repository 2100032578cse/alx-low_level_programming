#include "main.h"

/**
 * _strncat - concatenates two string
 * @dest: a string to concatnate to
 * @src: a string to concanate
 * @n: the most n from src
 * Return: a character
*/
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	j = 0;
	while (dest[j] != '\0')
	{
		j++;
	}
	i = 0;
	while (i < n)
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	return (dest);
}
