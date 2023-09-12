#include <stdio.h>

/**
 * main - Entry point and prints the first 50
 * Fibonacci numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	unsigned long n1 = 0, n2 = 1, n3;

	for (i = 0; i < 50; i++)
	{
		n3 = n1 + n2;
		printf("%lu", n3);
		n1 = n2;
		n2 = n3;
		if (i == 49)
			printf("\n");
		else
			printf(", ");
	}
	return (0);
}
