#include "main.h"
/**
*_isupper - Checks if a character is uppercase or not
*@c: character to be tasted
*Return: returns 1 if it is uppercase , 0 if not
*/
int _isupper(int c)
{
	if (c <= 'Z' && c >= 'A')
		return (1);
	return (0);
}
