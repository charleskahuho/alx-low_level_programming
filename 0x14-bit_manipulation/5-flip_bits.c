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
	unsigned long int mar;
	unsigned long int wes;

	for (i = 63; i >= 0; i--)
	{
		mar = wes>>i;
		if (mar & 1)
			count++;
	}
	return (count);
}
