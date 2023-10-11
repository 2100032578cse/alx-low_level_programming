#include <stdio.h>
#include <stdlib.h>

/**
 * main - print opcodes of its own
 * @argc: the size of the array
 * @argv: the argument array
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int c;
	char *mem = (char *) main;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	c = atoi(argv[1]);
	if (c < 0)
	{
		printf("Error\n");
		exit(2);
	}
	while (c--)
	{
		printf("%02x%c", *mem++ & 0xff, c ? ' ' : '\n');
		/*c--;*/
	}

	return (0);
}
