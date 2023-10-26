#include "main.h"
/**
 * get_endianness - Check the endianess
 *
 * Return: void
 */

int get_endianness(void)
{
	int i = 2;

	if (i & 1)
	{
		return (0);
	}

	return (1);
}
