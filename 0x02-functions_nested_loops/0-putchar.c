#include "main.h"
/**
* main - Entry point
* _putchar function to print a string.
* Return: Always 0 (Success)
*/
int main(void)
{
	char ch[] = "_putchar";
	int i = 0;

	while (i < 8)
	{
		_putchar(ch[i]);
		i++;
	}
	_putchar(10);
	return (0);
}
