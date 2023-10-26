#include "main.h"

/**
*clear_bit - func that sets a bit at index to 0
*@n: number used
*@index: where to clear
*Return: 1 on success
*/

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n = (*n & (~(1 << index)));
	return (1);
}
