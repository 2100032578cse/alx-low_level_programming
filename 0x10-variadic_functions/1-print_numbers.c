#include "variadic_functions.h"
#include<stdio.h>
#include<stdarg.h>

/**
 * print_numbers - func that prints numbers
 * @separator: string to print btn numbers
 * @n: number of ints passed
 * @...: other arguments
 * Return: numbers required
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);
	i = 0;
	while (i < n)
	{
		printf("%d", va_arg(args, const unsigned int));
		if (separator != NULL && i != (n - 1))
			printf("%s", separator);
		i++;
	}
	printf("\n");
	va_end(args);
}
