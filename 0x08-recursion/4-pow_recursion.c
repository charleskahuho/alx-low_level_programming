#include"main.h"
/**
 * _pow_recursion - function
 * @x: integer
 * @y: integer to raise to
 * Return: raise power
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * (_pow_recursion(x, y - 1)));
				}
				}
