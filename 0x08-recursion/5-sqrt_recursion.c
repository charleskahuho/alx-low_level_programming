#include"main.h"
#include<math.h>
/**
 *  _sqrt_recursion - function
 *   @n: number to find its square rrot
 * Return: square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (sqrt (_sqrt_recursion(n)));
}
