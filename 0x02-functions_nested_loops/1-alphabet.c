#include "main.h"

/**
 * print_alphabet - function to print alphabets
 *
 * Description: print alphabets in lowercase ascending order
 */
void print_alphabet(void)
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

