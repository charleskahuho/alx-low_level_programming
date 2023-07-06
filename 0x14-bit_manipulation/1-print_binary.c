#include"main.h"
#include<stddef.h>
#include<stdlib.h>
#include<limits.h>
#include<unistd.h>
/**
 * print_binary - function
 * @n: element
 *
 * Return: none
 */
void print_binary(unsigned long int n)
{
	unsigned long int bitPrint = 1ul << 63;

	char c = '0';

	while(!(bitPrint & n) && bitPrint != 0)
		bitPrint = bitPrint >> 1;
	if(bitPrint == 0)
		write(1, &c, 1);
	while(bitPrint)
	{
		if(bitPrint & n)
			c = '1';
		else
			c = '0';
		write(1, &c, 1);
		bitPrint = bitPrint >> 1;
	}
}
