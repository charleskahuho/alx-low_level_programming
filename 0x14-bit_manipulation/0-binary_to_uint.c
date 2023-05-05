#include<stddef.h>
#include"main.h"
/**
 * binary_to_iunt - function
 * @b: binary to convert
 * Return: defined
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0;

	int k;

	if (!b)
		return (0);
	for (k = 0; b[k]; k++)
	{
		if (b[k] > '1' || b[k] < '0')
		{
			return (0);
			i = 2 * i + (b[k] - '0');
		}
	}
	return (i);
}


