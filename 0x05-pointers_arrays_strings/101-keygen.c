#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 *main - generates random valid passwords
 *Return: 0 (on success).
 *
 */
int main(void)
{
	int pwd, res;

	srand(time(NULL));
	res = 0;
	while (res <= 2645)
	{
		pwd = (rand() % 128);
		res += pwd;
		printf("%c", pwd);
	}
	putchar(2772 - res);
	return (0);
}
