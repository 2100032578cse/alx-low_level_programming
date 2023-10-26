#include "main.h"

/**
*get_bit - returns a bit at the given index
*@n: the number
*@index: index for bits
*Return: bit got
*/
int get_bit(unsigned long int n, unsigned int index)
{
	if (index <= 62)
	{
		return (((n >> index) & 1));
	}
	else
		return (-1);
}
