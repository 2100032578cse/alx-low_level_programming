#include "main.h"

/**
 * _strcat - concatenates two string
 * @dest: a string to concatnate to
 * @src: a string to concanate
 * Return: a character
*/
char *_strcat(char *dest, char *src)
{
	int i, j;

	j = 0;
	while (dest[j] != '\0')
	{
		j++;
	}
	i = 0;
	while (src[i] != '\0')
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	return (dest);
}
