#include "main.h"
/**
*_isdigit - checks if a  character is a digit or not
*@c: character to test
*Return: returns 1 if it is digit , 0 if not
*/
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}
