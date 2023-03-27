#include"main.h"
/**
 *puts2 - function
 *
 *Return: none
 *@str: pointer
 */
void puts2(char *str)
{
	int count = 0;

	int i = 0;

	while (str[i])
	{
		count++;
		i++;
	}
	for (i = 0; i < count; i++)
	{
		if (i % 2 == 0)
			_putchar(str[i]);
	}
	_putchar(10);
}
