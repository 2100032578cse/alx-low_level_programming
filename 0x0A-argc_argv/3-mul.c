#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies n1 and n2
 * @argc: number of arguments
 * @argv: array
 * Return: 0
*/
int main(int argc, char *argv[])
{
	int mul;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}

        int n1 = atoi(argv[1]);
        int n2 = atoi(argv[2]);
	mul = n1 * n2;
	printf("%d\n", mul);
	return (0);
}
