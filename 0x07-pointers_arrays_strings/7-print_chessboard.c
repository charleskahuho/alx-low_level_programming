#include"main.h"
#define NULL 0
/**
 * print_chessboard - function
 * @a: array
 *
 * Return: none
 */
void print_chessboard(char (*a)[8])
{
	int j;

	int k;

	for (j = 0; j < 8; j++)
	{
		for (k = 0; k < 8; k++)
		{
			_putchar(a[j][k]);
		}
		_putchar(10);
	}
}
