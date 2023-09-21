#include "main.h"

/**
  * _strcmp - will compare s1 ans s2
  * @s1: string to comare to s2
  * @s2: string to compare to s1
  * Return: an int value +ve,0 or _ve.
*/
int _strcmp(char *s1, char *s2)
{
	int n, i;

	n = 0;
	while (s1[n] != '\0')
	{
		n++;
	}
	i = 0;
	while (s2[i] != '\0')
	{
		i++;
	}
	return (n - i);
}
