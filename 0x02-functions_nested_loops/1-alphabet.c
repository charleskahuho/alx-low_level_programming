#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
void main(void)
{
	char ch;

	ch = 'a';
	while (ch <= 'z')
	{
		_putchar(ch);
		ch++;
	}
	_putchar(10);
}

