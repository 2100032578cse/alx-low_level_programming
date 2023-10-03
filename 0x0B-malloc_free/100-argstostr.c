#include "main.h"

/**
 * argstostr - concatenates all the arguments of program.
 * @ac: number of arguments
 * @av: array
 * Return: pointer to a new string
*/
char *argstostr(int ac, char **av)
{
	char *str;
	int i = 0, j, k = 0, len = 0, ii, jj;

	if (ac == 0 || av == NULL)
		return (NULL);
	while (i < ac)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			len++;
		len++;
		i++;
	}
	str = malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (NULL);
	ii = 0;
	while (ii < ac)
	{
		jj = 0;
		while (av[ii][jj] != '\0')
		{
			str[k] = av[ii][jj];
			k++;
			jj++;
		}
		str[k] = '\n';
		k++;
		ii++;
	}
	return (str);

}
