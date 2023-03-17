#include<stdio.h>
/**
* main - Entry point
* putchar with for loop-writing alphabets
* Return: Always
*/
int main(void)
{
	char ch = 'a';
	char c = 'A';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	while (c <= 'Z')
	{
		putchar(c);
		c++;
	}
	putchar(10);
	return (0);
}
