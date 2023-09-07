#include<stdio>
#include<unstd.h>

/**
 * main - Entry point
 *
 * print without printf and puts
 * Return: will return 1 (Success)
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
