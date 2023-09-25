#include "main.h"

/**
 * _strpbrk - function locates the first occurrence in the string
 * @s: string to be used
 * @accept: string of bytes
 * Return:  pointer to the byte
*/
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		i = 0;
		while (accept[i])
		{
			if (accept[i] == *S)
				return (s);
			i++;
		}
		s++;
	}

	return (NULL);
}
