#include"main.h"
#include<stdio.h>
/**
 * print_to_98 - function
 * @n: first number
 *
 * Description: print all numbers to 98
 * Return: none
 */

void print_to_98(int n)
{
	while (n != 98)
	{
		printf("%d, ", n);
		if (n < 98)
			n++;
		else if (n > 98)
			n--;
	}
	printf("%d\n", n);
}
