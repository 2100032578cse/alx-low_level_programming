#include "main.h"

/**
 * _strdup - function to duplicate a string
 * @str: string to duplicate
 * Return: pointer to a new string
*/
char *_strdup(char *str)
{
	char *dup;
	int i, len = 0;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i] != "\0")
	{
		len++;
		i++;
	}
	dup =  malloc((len + 1) * (sizeof(char));
	if (dup == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len; i++)
	{
		dup[i] = str[i];
	}
	return (dup);
}
