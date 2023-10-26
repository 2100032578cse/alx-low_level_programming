#include "main.h"

/**
 * binary_to_uint - Converts binary to to nsigned int
 * @b: string
 * Return: unsigned int
 */

unsigned int binary_to_uint(const char *b)
{
	signed int n = 0, i;

	if (!b)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '1' && b[i] != '0')
		{
			return (0);
		}
		n = n << 1;
		if (b[i] & 1)
		{
			n++;
		}
	}
	return (n);
}
