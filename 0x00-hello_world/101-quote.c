#include<sstdio>
/*print without printf and puts*/
int main(void)
{
	char chs[] = "\"and that piece of art is useful\" - Dora Korpar, 2015-10-19";

	fwrite(chs);
	return (1);
}
