#include"main.h"
/**
 * set_bit - function
 * @n: first element
 * @index: index starting from zero
 * Return: defined
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(unsigned long int) * 8)
		return (-1);

	*n = *n | (1 << index);

	return (1);
}
