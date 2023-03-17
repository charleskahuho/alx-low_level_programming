#include<stdio.h>
/**
* main - Entry point
* putchar to print all base16s to lowercase
* Return: Always 0
*/
int main(void)
{
	int b = '0';
	char k = 'a';

	while (b <= '9')
	{
		putchar(b);
		b++;
	}
	while (k <= 'f')
	{
		putchar(k);
		k++;
	}
	putchar(10);
	return (0);
}

