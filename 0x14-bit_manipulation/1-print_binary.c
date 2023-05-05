#include"main.h"
/**
 * print_binary - function
 * @n: first element
 *
 * Return: none
 */
void print_binary(unsigned long int n)
{
	unsigned long int k = 0;

	if (n == 0)
		_putchar(n + '0');

	while (n > 0)
	{
		if ((n & 1) == 0)
		{
			k += (k + 0);
			n = n >> 1;
			_putchar('0');
		}
		else
		{
			k += (k + 1);
			n = n >> 1;
			_putchar('1');
		}
	}
}
