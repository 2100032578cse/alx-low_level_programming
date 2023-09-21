#include "main.h"

/**
 * leet - turns some chars into 1337
 * @str: string to manuplate with 1337
 * Return: chars manipulated
*/
char *leet(char *str)
{
	int c, lc;
	char chrs[] = "aAeEoOtTlL";
	char repl[] = "4433007711";

	for (c = 0; str[c] != '\0'; c++)
	{
		for (lc = 0; lc < 10; lc++)
		{
			if (chrs[lc] == str[c])
			{
				str[c] = repl[lc];
			}
		}
	}
	return (str);
}
