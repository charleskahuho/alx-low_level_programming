#include"main.h"
#include<stdio.h>
/**
 * flip_bits - function
 * @n: first element
 * @m: second element
 *
 * Return: defined
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int flip = 0, comp1, comp2;

	while(!(n == 0 && m == 0))
	{
		comp1 = n & 1;
		comp2 = m & 1;
		n = n >> 1;
		m = m >> 1;
		if(comp1 != comp2)
			flip += 1;
	}
	return (flip);
}
