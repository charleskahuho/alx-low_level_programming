#include"main.h"
/**
 * get_bit - function
 * @n: first element
 * @index: index starting from zero
 * Return: defined
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int var;

	if (index > sizeof(unsigned long int) * 8)
		return (-1);
	var = (n >> index) & 1;

	return (var);
}
