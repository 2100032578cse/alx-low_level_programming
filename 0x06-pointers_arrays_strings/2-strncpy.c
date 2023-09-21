#include "main.h"
/**
 * _strncpy - copyies astring
 * @dest: string destination
 * @src: string source
 * @n: number of characters to copy
 * Return: chars
*/
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
	}
	return (dest);
}
