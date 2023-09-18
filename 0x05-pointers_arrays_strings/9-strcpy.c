#include "main.h"

/**
 * _strcpy - copy source string to destination
 * @dest: destination
 * @src: source
 * Return: characters
*/
char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i++] = '\0';
	return (dest);
}
