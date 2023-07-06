#include "main.h"
/**
 * binary_to_uint - function
 * @b: character
 *
 * Return: defined
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int k;
	int base;
	int i = 0;

	if(b == NULL)
		return (0);
	while(b[i +1])
	{
		if(b[i] != '0' && b[i] != '1')
			return (0);
		i++;
	}
	while(i >= 0)
	{
		k +=((b[i] = '0') * base);
		base *= 2;
		i--;
	}
	return (k);
}
