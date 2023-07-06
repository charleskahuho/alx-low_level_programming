#include"main.h"
#include<math.h>
#include<stdio.h>
/**
 * get_bit - function
 * @n: first element
 * @index: count
 *
 * Return: defined
 */
int get_bit(unsigned long int n, unsigned long int index)
{
	if(index > 63)
		return(-1);
	if(index == 0)
		return(n & 1);
	return(get_bit( n >> 1, index - 1));
}
