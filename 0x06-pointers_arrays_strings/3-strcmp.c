#include "main.h"

/**
  * _strcmp - will compare s1 ans s2
  * @s1: string to comare to s2
  * @s2: string to compare to s1
  * Return: an int value +ve,0 or _ve.
*/
int _strcmp(char *s1, char *s2)
{
	int i, diffans;

	i = 0;
	while (s1[i] != '\0' && s1[i] ==s2[i])
	{
			i++;
	}
	diffans = s1[i] - s2[i];
	return (diffans);
}
