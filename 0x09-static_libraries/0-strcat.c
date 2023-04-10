#include"main.h"
/**
 * _srtcat - function
 * @dest: variable
 * @str: variable
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int i;

	int h;

	for (i = 0; dest[i]; i++)
		;
	for (h = 0; src[h]; h++)
	{
		dest[i] = src[h];
		i++;
	}
	return (dest);
}
