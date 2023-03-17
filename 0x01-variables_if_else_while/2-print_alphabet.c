#include<stdio.h>
/**
 * main - Etry point
 * putchar - input string
 * return: always 0
 */
int main(void)
{
	char ch;

	for(ch='a';ch<='z';ch++)
	{
		putchar(ch);
	}
	putchar(10);
	return (0);
}
