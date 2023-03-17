#include<stdio.h>
/**
* main - Entry point
* putchar used to lowercase alphabet in reverse
* Return: Always 0
*/
int main(void)
{
	char al;

	for (al = 'z'; al >= 'a'; al--)
	{
		putchar(al);
	}
	putchar(10);
	return (0);
}
