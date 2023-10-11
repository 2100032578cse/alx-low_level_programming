#include "function_pointers.h"
/**
 * print_name - fun that print a name
 * @name: name of the person
 * @f: function which print name
 * Return: nothing
*/
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
