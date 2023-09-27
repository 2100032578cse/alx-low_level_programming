#include "main.h"

/**
 * Sqrt - returns a square toot of n;
 * @n: a number to verify sqware root
 * @res: result to verfy
 * Return: a squareroot
*/
int Sqrt(int n, int res)
{
	if (n == (res * res))
		return (res);
	else if ((res * res) >= n)
		return (-1);
	else
		return (Sqrt(n, res + 1));
}
/**
 * _sqrt_recursion - returns a square toot of n;
 * @n: a number to calculate sqware root
 * Return: a squareroot
*/
int _sqrt_recursion(int n)
{
	if (n == 1 || n == 0)
		return (n);
	if (n < 0)
		return (-1);
	return (Sqrt(n, 0));

}
