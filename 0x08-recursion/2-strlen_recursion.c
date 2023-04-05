#include"main.h"
/**
 * _strlen_recursion - function
 * @s: string to count
 * Return: string length
 */
int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s != '\0')
	{
		i = i + 1;
		i = 1 +_strlen_recursion(s + 1);
	}
	return (i);
}
