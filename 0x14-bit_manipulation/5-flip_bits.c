#include"main.h"
/**
 * flip_bits - function
 * @n: first element
 * @m: second element
 * Return: count
 */
 unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i;
	int count = 0;

	for (i = 63; i >= 0; i--)
	{
		n = m>>i;
		if (n & 1)
			count++;
	}
	return (count);
}
