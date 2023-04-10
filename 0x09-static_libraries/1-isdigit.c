#include"main.h"
/**
 *_isdigit - function to check for digits
 *
 * @c: parameter
 * Return: 0
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		c++;
		return (1);
	}
	else
	{
		return (0);
	}
	return (0);
}
