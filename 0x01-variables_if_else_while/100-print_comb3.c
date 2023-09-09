#include<stdio.h>

/**
 * main - program that prints all possible different
 * combinations of two digits
 *
 * Return: always 0(Success)
*/
int main(void)
{
	int n;
	int a;

	for (n = 0; n < 9; n++)
	{
		a = n + 1;
		do {
			putchar(n + '0');
			putchar(a + '0');
			if (n < 8)
			{
				putchar(',');
				putchar(32);
			}
			a++;
		} while (a < 10);
	}
	putchar('\n');
	return (0);
}
