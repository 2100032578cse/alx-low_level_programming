#include "main.h"

/**
 * cap_string - turns every world capitalized
 * @str: string in it to capitalize
 * Return: all worlds capitalized
*/
char *cap_string(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] <= 122 && str[i] >= 97)
		{
			str[0] = str[0] - 32;
		}
		if (str[i] == ',' || str[i] == '.' || str[i] == ';'
				|| str[i] == '?' || str[i] == '!'
				|| str[i] == '"' || str[i] == '{'
				|| str[i] == '}' || str[i] == '('
				|| str[i] == ')' || str[i] == '.'
				|| str[i] == '\t' || str[i] == '\n' || str[i] == ' ')
		{
			if (str[i + 1] <= 122 && str[i + 1] >= 97)
			{
				str[i + 1] = str[i + 1] - 32;
			}
		}
		i++;
	}
	return (str);
}
