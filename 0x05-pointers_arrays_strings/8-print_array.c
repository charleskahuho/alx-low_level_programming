#include"main.h"
#include<stdio.h>
/**
 *print_array - function
 *
 *@a: pointer
 *@n: size of pointer
 *
 *Return: none
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i != 0)
		{
			printf(" ,");
		}
		printf("%d", a[i]);
	}
	printf("\n");
}
