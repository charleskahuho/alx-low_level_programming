#include"main.h"
/**
 * _puts_recursion - function
 * @s: string to reverse
 *
 * Return: none
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}

