#include"main.h"
/**
 * _memset - function
 *
 * @s: character
 * @b: character
 * @n: no of bits
 *
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
