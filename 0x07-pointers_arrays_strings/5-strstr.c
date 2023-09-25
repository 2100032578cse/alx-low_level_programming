#include "main.h"

/**
 * _strstr -  finf first occurance of substring needle
 * in string haystack
 * @haystack: a string to search from
 * @needle: a substring to be found
 * Return: pointer to beginning of allocated substring
*/
char *_strstr(char *haystack, char *needle)
{
	unsigned int i = 0, j = 0;

	while (haystack[i])
	{
		while (needle[j] && (haystack[i] == needle[0]))
		{
			if (haystack[i + j] == needle[j])
				j++;
			else
				break;
		}
		if (!needle[j])
		{
			return (haystack + i);
		}
		else
		{
			i++;
			j = 0;
		}
	}
	return (0);
}
