#include "main.h"

/**
 * is_prime_number - check if n is prime number
 * @n: a number to check
 * Return: 1 if it is prime or 0  if it is not
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	if (n == 2)
		return (1);
	if ((n % 2 == 0) || (n % 3 == 0) || (n % 5 == 0)
			|| (n % 7 == 0) || (n % 9 == 0))
	{
		return (0);
	}
	return (1);
}
