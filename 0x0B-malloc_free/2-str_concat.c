#include "main.h"

/**
 * str_concat - concatenates strings
 * @s1: first string
 * @s2: second string
 * Return: pointer to a newly allocated space in memory
*/
char *str_concat(char *s1, char *s2)
{
	char *conc;
	int len = 0, i = 0, k = 0, c = 0, c2 = 0, cc = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i])
	{
		len++;
		i++;
	}
	while (s2[k])
	{
		len++;
		k++;
	}
	conc =  malloc(sizeof(char) * (len + 1));
	if (conc == NULL)
	{
		return (NULL);
	}
	while (s1[c])
	{
		conc[cc++] = s1[c];
		c++;
	}
	while (s2[c2])
	{
		conc[c++] = s2[c2];
		c2++;
	}
	return (conc);
}
