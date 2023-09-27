#include "main.h"

/**
 * factorial - returns a factorial of anumber
 * @n: a number to return factorial of
 * Return: factorial
*/
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)/* || n ==1)*/
		return (1);
	return (n * factorial(n - 1));
}
