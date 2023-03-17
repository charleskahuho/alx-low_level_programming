#include<stdio.h>
/**
* main -Entry point
* putchar to print single digit numberz
* Return: Always 0
*/
int main(void)
{
	int k = '0';

	while (k <= '9')
	{
		putchar(k);
		k++;
	}
	putchar(10);
	return (0);
}
