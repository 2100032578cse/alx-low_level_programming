#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * sum_them_all -  func that sum all its
 * parameters
 * @n:number of other arguments
 * @...: other arguments
 * Return: return sum
*/
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	int sumAll = 0;

	if (n == 0)
		return (0);
	va_start(args, n);
	i = 0;
	while (i < n)
	{
		sumAll = sumAll + va_arg(args, int);
		i++;
	}
	va_end(args);
	return (sumAll);
}
