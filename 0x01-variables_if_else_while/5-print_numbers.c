#include<stdio.h>
/**
* main - Entry point
* printf to print whole numbers
* Return: Always 0
*/
int main(void)
{
	char d = '0';

	while (d <= '9')
	{
		putchar(d);
		d++;
	}
	putchar(10);
	return (0);
}
