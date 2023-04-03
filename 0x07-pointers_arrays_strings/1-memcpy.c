#include"main.h"
/**
 * _memcpy - function
 *
 * @dest: character
 *
 * @src: character
 *
 * @n: no of bits
 *
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		src[i] = dest[i];
	}
	return (dest);
}
