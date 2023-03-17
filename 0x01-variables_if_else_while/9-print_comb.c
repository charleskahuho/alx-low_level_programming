#include<stdio.h>
/**
* main - Entry point
* putchar to print combinations of sing dig numbers
* Return: Always 0
*/
int main(void)
{
	int l = '0';

	while (l <= '9')
	{
		putchar(l);
		if (l < '9')
			{
			putchar(',');
			putchar(' ');
			}
		l++;
	}
	putchar(10);
	return (0);
}
