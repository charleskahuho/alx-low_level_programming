#include"main.h"
#define NULL 0
/**
 * _strchr - function
 *
 *
 * @s: character
 * @c: character
 *
 * Return: defined
 */
char *_strchr(char *s, char c)
{
	for (; ; s++)
	{
		if (*s == c)
		{
			return (s);
		}
		if (*s == c && c == NULL)
		return (s);
	if (*s == NULL)
		break;
	}
	return (NULL);
}

