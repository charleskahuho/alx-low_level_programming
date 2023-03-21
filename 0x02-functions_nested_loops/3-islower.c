#include "main.h"

/**
 * Description:check for lowercase letters
 * main - check the code.
 *islower function to check for lowercase
 * Return: Always 0.
 */
int _islower(int c)
{

	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	return (c);
}
