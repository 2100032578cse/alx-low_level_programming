#include <stdio.h>

/**
 * main - entry point and finds and prints the largest prime
 * factor of the number 612852475143
 *
 * Return: will return 0 (Success)
*/
int main(void)
{
	long int n = 612852475143;
	int num;
	int primes;

	for (primes = 2; primes <= n; primes++)
	{
		if (n % primes == 0)
		{
			n /= primes;
			num = primes;
		}
	}
	printf("%d\n", num);
	return (0);
}
