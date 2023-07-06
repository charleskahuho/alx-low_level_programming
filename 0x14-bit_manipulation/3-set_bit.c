#include<stdio.h>
#include"main.h"
#include<math.h>
/**
 * set_bit - function
 * @n: element 
 * @index: count
 *
 * Return: defined
 */
int set_bit(unsigned long int *n, unsigned long int index)
{
	int addition;

	if(index > 63)
		return(-1);
	addition = 1 << index;
	*n = *n | addition;
	return (1);
}
