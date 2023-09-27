#include "main.h"
/**
 * wildcmp - compare two strings
 * @s1: string to compare to s2
 * @s2: string to compare to s1
 * Return: 1 if identical , 0 if  not
*/
int wildcmp(char *s1, char *s2)
{
	if ((*s1 == '\0') && (*s2 == '\0'))
	{
		return (1);
	}
	else
	{
		if (*s1 == *s2)
		{
			return (wildcmp(s1 + 1, s2 + 1));
		}
	}
	if (*s2 == '*')
	{
		if (*s1 == '\0')
		{
			return (0);
		}
		if (wildcmp(s1 + 1, s2))
		{
			return (1);
		}
		if (wildcmp(s1, s2 + 1))
		{
			return (1);
		}

	}
	else
		return (0);
}
