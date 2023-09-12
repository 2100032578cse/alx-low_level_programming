#include "main.h"
#include <stdio.h>

/**
*print_to_98 - prints natural
*numbers from n to 98
*@n:integer to start by
*return: returns nothing
*/
void print_to_98(int n)
{
	int i, j;

	if (n <= 98)
	{
		for (i = n; i <= 98; i++)
		{
			if (i != 98)
				printf("%d, ", i);
			printf("%d\n", i);
		}
	}
	else
	{
		for (j = n; j >= 98; j--)
		{
			if (j != 98)
				printf("%d, ", j);
			printf("%d\n", j);
		}
	}
}
