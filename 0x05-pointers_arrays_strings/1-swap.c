#include"main.h"
/**
 *swap_int - function
 *
 *b: second pointer
 *a: first pointer
 *Return: none
 */
void swap_int(int *a, int *b)
{
	int temp;

	int temp1;

	temp = *a;
	temp1 = *b;
	*b = temp;
	*a = temp1;
}



