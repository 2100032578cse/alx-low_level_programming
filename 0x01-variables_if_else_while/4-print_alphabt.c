#include<stdio.h>

/**
 * main - prints alphabet in lowercase except
 * e and q
 *
 * Return: Always return 0 (Success)
*/
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		if (c != 'e' && c != 'q')
			putchar(c);
	}
	putchar('\n');
	return (0);

}
