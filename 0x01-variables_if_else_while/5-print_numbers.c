#include<stdio.h>
/**
 * main - entry point
 * printf to print wholenumbers
 * Return: Always 0
 */
int main(void)
{
	char c = '0';

	while (c <= '9')
	{
		putchar(c);
		c++;
	}
	putchar(10);
	return (0);
}
