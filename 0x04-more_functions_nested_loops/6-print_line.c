#include"main.h"
/**
* print_line - function
* @n: first operand
*
* Description: draw a straight line in the terminal with \n
* Return:none
*/
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar(10);
}
