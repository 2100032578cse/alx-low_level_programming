#include "main.h"
/**
 * string_nconcat - concatenete two strings
 * @s1: string input
 * @s2: string input
 * Return: a pointer to new allocated memeory
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len = 0;
	char *news;
	int i, k;
	
	if (s2 == NULL)
		s2 = "";
	if (s1 == NULL)
		s1 = "";
	i = 0;
	while (s2[i])
	{
		len++;
		i++;
	}
	k = 0;
	while (s1[k])
        {
                len1++;
                k;
        }
	news = malloc(sizeof(char) *(len1 + n + 1));
	if (news == NULL)
		return (NULL);
	for (ii = 0; ii < len1; ii++)
	{
		news[cc++] = s1 [ii];
	}
	for (jj = 0; jj < n; jj++)
	{
		news[cc++] = s2[jj];
	}
	return (news);
}
