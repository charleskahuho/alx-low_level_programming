#include"main.h"
/**
 * clesr_bit - function
 * @n: pointer of set bit
 * @index: index starting from zero of set bit
 * Return: defined
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(unsigned long int) * 8)
		return (-1);

	*n = *n & ~(1 << index);

	return (1);
}
