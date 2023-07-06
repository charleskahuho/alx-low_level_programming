#include"main.h"
#include<stdio.h>
#include<math.h>
/**
 * clear_bit - function
 * @n: first element
 * @index: count
 *
 * Return: defined
et*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	int add;

	if(index > 63)
		return(-1);
	add = 1 << index;
	*n = *n & (-add);
	return (1);
}
