#include "main.h"
/**
 * _pow_recursion - return power of y to x
 * @x: a number to be powered
 * @y: a number to power to x
 * Return: a power of x raised to y
*/
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0 || x == 1)
		return (1);
	if (y == 1)
		return (x);
	return (x * _pow_recursion(x, y - 1));

}
