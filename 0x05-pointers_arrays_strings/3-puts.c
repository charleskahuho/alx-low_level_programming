#include"main.h"
/**
 *_puts - function
 *
 *@str: pointer
 *Return: none
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar(10);

}
