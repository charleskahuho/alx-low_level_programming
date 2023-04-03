#include"main.h"
#include<stdio.h>
/**
 * print_diagsums - function
 *
 * @a: character
 * @size: bit size
 * Return: none
 */
void print_diagsums(int *a, int size)
{
	int i, j, k, sum, m, n;

	sum = 0;

	m = 0;

	k = size - 1;

	for (i = 0; i <= k; i++)
	{
		for (j = 0; j <= k; j++)
		{
			if (i == j)
			{
			n = ((size * i) + j);
			sum = *(a + n) + sum;
		}
		if (j == (k - i))
		{
			n = ((size * i) + j);
			m = *(a + n) + sum;
		}
		}
	}
	printf("%d", sum);
	printf("%d", m);
}


