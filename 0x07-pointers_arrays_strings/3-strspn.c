#include "main.h"

/**
 * _strspn - function that gets the length of a prefix substring
 * @s: the initial segment
 * @accept: where bytes are from
 * Return: the number of bytes of s
 */
unsigned int _strspn(char *s, char *accept)
{
	int j = 0, i = 0, k;

	while (s[i] != '\0')
	{
		if (s[i] != 32)
		{
			k = 0;
			while (accept[k] != '\0')
			{
				if (s[i] == accept[k])
					j++;
				k++;
			}
		}
		else
		{
			return (j);
		}
		i++;
	}
		return (j);

}
