#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - prints strings
 * @separator: sepaartes strings
 * @n:number of strings
 * @...: other parametrs
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);
	i = 0;
	while (count < n)
	{
		char *str;

		s = va_arg(args, char *);
		if (s == NULL)
			printf("(nil)");
		else
			printf("%s", str);
		if (separator != NULL && (i + 1) != n)
			printf("%s", separator);
		i++;
	}
	printf("\n");
	va_end(args);
}
