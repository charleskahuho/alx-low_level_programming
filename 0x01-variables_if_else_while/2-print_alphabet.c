#include<stdio.h>
/**
 * main - Etry point
 * putchar - input string
 * Return: always 0
 */
int main(void)
{
	char ch;

	for (ch ='a'; ch<='z'; ch++)
	{
		putchar(ch);
	}
	putchar(10);
	return (0);
}
